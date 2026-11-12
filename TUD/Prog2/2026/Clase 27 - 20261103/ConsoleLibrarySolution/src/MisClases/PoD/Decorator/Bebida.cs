namespace MisClases.PoD.Decorator;
public abstract class Bebida
{
    private string _descripcion;
    public string Descripcion
    {
        get { return _descripcion; }
        set { _descripcion = value; }
    }
    private double _costo;
    public double Costo
    {
        get { return _costo; }
        set { _costo = value; }
    }

    public Bebida(string descripcion, double costo)
    {
        this.Descripcion = descripcion;
        this.Costo = costo;
    }

    public abstract string ObtenerInformacion();
}

public class CafeSolo : Bebida
{
    public CafeSolo(string descripcion, double costo) : base(descripcion, costo)
    {

    }

    public override string ObtenerInformacion()
    {
        //throw new NotImplementedException();
        return this.Descripcion;
    }
}
public abstract class Decorado : Bebida
{
    protected Decorado(string descripcion, double costo) : base(descripcion, costo)
    {
    }
}

public class Leche : Decorado
{
    public Bebida(Bebida otraBebida)
    {
        
    }
    public override string ObtenerInformacion()
    {
        throw new NotImplementedException();
    }
}