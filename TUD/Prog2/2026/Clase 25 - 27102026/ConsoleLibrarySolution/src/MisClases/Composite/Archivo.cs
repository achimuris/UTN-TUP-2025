using MisClases.Composite;
public class Archivo : ComponenteElementoDelSistemaDeArchivo
{
    private double _peso;
    public double Peso
    {
        get { return _peso; }
        set { _peso = value; }
    }

    public Archivo(string nombre, double tamaño)
    {
        this.Nombre = nombre;
        this.Peso = tamaño;
    }
    
    public override double ObtenerTamaño()
    {
        return this.Peso;
    }

    //Si lo dejamos así, no cumplimos con ISP
    public override void Agregar(ComponenteElementoDelSistemaDeArchivo unComponente)
    {
        throw new NotImplementedException();
    }
}
