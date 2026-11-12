namespace MisClases.PD;

public class GerenteSucursal : Handler
{
    public override void AtenderSolicitud(double monto)
    {
        if (monto <= 2000000 )
        {
            System.Console.WriteLine("Prestamo aprobasdo por el Gerente de Sucursal");
        }else
        {
            this.Siguiente.AtenderSolicitud(monto);
        }
    }
}
