using MisClases;

public class ClaseConcretaAdaptada : ICalculadoraAdapter
{
    private CalculadoraClaseAdaptada adaptee;
    public ClaseConcretaAdaptada()
    {
        adaptee = new CalculadoraClaseAdaptada();
    }
    public double Dividir(double numero1, double numero2)
    {
        return adaptee.RealizarOperacion(numero1, numero2, TipoOperacion.Division);
    }

    public double Multiplicar(double numero1, double numero2)
    {
        return adaptee.RealizarOperacion(numero1, numero2, TipoOperacion.Multiplicacion);
    }

    public double Restar(double numero1, double numero2)
    {
        return adaptee.RealizarOperacion(numero1, numero2, TipoOperacion.Resta);
    }

    public double Sumar(double numero1, double numero2)
    {
        return adaptee.RealizarOperacion(numero1, numero2, TipoOperacion.Suma);
    }
}