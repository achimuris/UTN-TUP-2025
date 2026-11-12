namespace MisClases.Pod.Strategy;
public class PedidoOld
{
    public decimal CalcularPrecio(decimal precio, string tipoCliente)
    {
        if (tipoCliente == "Jubilado")
            return precio * 0.50m;
        if (tipoCliente == "Frecuente")
            return precio * 0.90m;
        if (tipoCliente == "VIP")
            return precio * 0.80m;
        return precio;
    }
}
