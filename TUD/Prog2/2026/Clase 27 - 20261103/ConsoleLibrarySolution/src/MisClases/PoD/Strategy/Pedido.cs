public class Pedido
{
    private EstrategiaTipoCliente _tipoCliente;
    public EstrategiaTipoCliente TipoCliente
    {
        get { return _tipoCliente; }
        set { _tipoCliente = value; }
    }
    
    public decimal CalcularPrecio(decimal precio)
    {
        return _tipoCliente.DevolverDescuento() * precio;
    }

    public Pedido(EstrategiaTipoCliente estrategia)
    {
        this.TipoCliente = estrategia;
    }

}

public abstract class EstrategiaTipoCliente
{
    public abstract decimal DevolverDescuento();
}

public class ClienteVIP : EstrategiaTipoCliente
{
    public override decimal DevolverDescuento()
    {
        return  0.80m;
    }
}

public class ClienteJubilado : EstrategiaTipoCliente
{
    public override decimal DevolverDescuento()
    {
        return  0.50m;
    }
}
public class ClienteFrecuente : EstrategiaTipoCliente
{
    public override decimal DevolverDescuento()
    {
        return  0.90m;
    }
}
