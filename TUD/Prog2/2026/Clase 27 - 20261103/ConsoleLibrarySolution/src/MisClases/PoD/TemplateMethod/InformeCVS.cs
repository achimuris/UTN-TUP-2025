using MisClases.PoD.TemplateMethod;

public class InformeCVS : InformeTemplate
{
    public InformeCVS(string filtroMateria)
    {
        this.FiltroMateria = filtroMateria;
    }
    public override void RealizarReporte(List<Alumno> alumnos)
    {
        System.Console.WriteLine("Comenzando el reporte por CVS...");
        foreach (Alumno alumno in alumnos)
        {
            Console.Write(alumno.ApellidoYNombre + ", ");
            Console.Write(alumno.Activo + ", ");
            Console.Write(alumno.Materia + ", ");
            System.Console.WriteLine("");
        }


        System.Console.WriteLine("Finalizando el reporte por CVS...");
    }
}