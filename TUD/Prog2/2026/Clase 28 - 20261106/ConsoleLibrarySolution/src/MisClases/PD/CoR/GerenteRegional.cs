namespace MisClases.PD;

public class GerenteRegional : Handler
{
    public override void AtenderSolicitud(double monto)
    {
        if (monto < 50000000)
        {
            System.Console.WriteLine("Monto aprobado por el Gerente Regional");
        }
        else
        {
            System.Console.WriteLine("Se escapa de nuestro ejercicio");
        }
    }
}