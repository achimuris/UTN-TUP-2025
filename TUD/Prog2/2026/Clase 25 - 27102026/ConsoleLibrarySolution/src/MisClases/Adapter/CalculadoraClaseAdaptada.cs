namespace MisClases;
public enum TipoOperacion
{
    Suma,
    Resta,
    Multiplicacion,
    Division,    
}
public class CalculadoraClaseAdaptada
{
    public double RealizarOperacion(double numero1, double numero2, TipoOperacion tipoOperacion)
    {
        double resultado = 0;
        
        switch (tipoOperacion)
        {
            case TipoOperacion.Suma:
                resultado = numero1 + numero2;
                break;
            case TipoOperacion.Resta:
                resultado = numero1 - numero2;
                break;
            case TipoOperacion.Multiplicacion:
                resultado = numero1 * numero2;
                break;
            case TipoOperacion.Division:
                resultado = numero1 / numero2;
                break;
        }

        return resultado;

    }
}
