namespace MisClases.PD;
public class Comercial : Handler
{
    
    //Comercial --> 800000
    //Gerente Sucursal --> 2000000
    //Gerente Regional --> 50 000 000
    
    public override void AtenderSolicitud(double monto)
    {
        if (monto < 800000)
        {
            System.Console.WriteLine("Prestamo aprobado por el comercial");
        }else
        {
            this.Siguiente.AtenderSolicitud(monto);
        }
    }
}