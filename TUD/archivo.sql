USE [Campus]
GO
/****** Object:  StoredProcedure [dbo].[sp_UB_ListarActividadesExtracurricularesQR]    Script Date: 22/10/2025 15:33:10 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO

-- EXEC [sp_UB_ListarActividadesExtracurricularesQR]

ALTER PROCEDURE [dbo].[sp_UB_ListarActividadesExtracurricularesQR]

AS
BEGIN 

DECLARE
    @FechaDesde date = DATEADD(day,-1,Getdate()),
    @FechaHasta date = Getdate(),
    @FechaActual datetime = Getdate(),
	@HorasAdicionales int = 2


    SELECT distinct
	    AE.Id,
        AE.IdTipoActividad,
        TA.nombre AS TipoActividad,
        AE.Nombre,
        AE.Fecha,
        AE.Lugar,
        AE.Orador,
        ISNULL(CA.Cantidad,0) AS CantidadAlumnosInscriptos,
        AE.Cupo,
        AE.Credito,
        AE.HabilitadoInscripcion,
        AE.Cancelado,
        AE.MotivoCancelacion,
        AE.FechaCreacion,
        AE.UsuarioCreacion,
        AE.FechaModificacion,
        AE.UsuarioModificacion,
        AE.FechaProcesado,
        AE.Organizador,
        AE.Contacto,
        AE.Observaciones,
        AE.UsuarioProcesado--,
        --CASE WHEN AE.FechaProcesado IS NULL THEN 0 ELSE 1 END AS Procesado
    FROM dbo.UB_Actividades_Extracurriculares AE
    INNER JOIN UB_TipoActividad TA ON TA.codigo = AE.IdTipoActividad
    LEFT JOIN UB_Actividades_Extracurriculares_Carreras AEC on AEC.IdActividadExtracurricular = AE.Id and AEC.Activo = 1 and AEC.Baja = 0
    LEFT JOIN UB_CODE_CURRICULUM_COLLEGE CCC on CCC.Carrera = AEC.IdCarrera
    LEFT JOIN (
	   
	   SELECT 
		  IAE.IdActividadExtracurricular AS IdActividadExtracurricular,
		  COUNT(IAE.id) AS Cantidad
	   FROM dbo.UB_Inscripcion_Actividades_Extracurriculares IAE
	   where
		  IAE.Activo = 1 and IAE.Baja = 0
	   GROUP BY IAE.IdActividadExtracurricular
	   
     ) CA ON CA.IdActividadExtracurricular = AE.id
     where
		  -- ( @Idcarrera is null or AEC.IdCarrera = @Idcarrera )
	   --And  ( @IdFacultad IS NULL OR CCC.Facultad = @IdFacultad )
	   --and  
	   ( CONVERT(date,AE.fecha) between @FechaDesde and @FechaHasta)
	   and DATEADD(HOUR,@HorasAdicionales,AE.fecha) >= @FechaActual
	   and AE.HabilitadoInscripcion = 1
	   and AE.Cancelado = 0
    
END




