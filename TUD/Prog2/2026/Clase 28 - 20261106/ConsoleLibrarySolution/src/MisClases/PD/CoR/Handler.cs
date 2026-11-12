namespace MisClases.PD;

public abstract class Handler
{
    private Handler _siguiente;
    public Handler Siguiente
    {
        get { return _siguiente; }
        set { _siguiente = value; }
    }

    //Comercial --> 800000
    //Gerente Sucursal --> 2000000
    //Gerente Regional --> 50 000 000


    public abstract void AtenderSolicitud(double monto);
}