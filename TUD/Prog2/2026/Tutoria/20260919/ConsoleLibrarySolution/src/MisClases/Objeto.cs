namespace MisClases;

public class Objeto
{
    private int _volumen;
    public int Volumen
    {
        get { return _volumen; }
        set { _volumen = value; }
    }

    private Material _material;
    public Material Material
    {
        get { return _material; }
        set { _material = value; }
    }

    private List<Objeto> _contenidos;
    // public List<Objeto> Contenidos
    // {
    //     get { return _contenidos; }
    //     set { _contenidos = value; }
    // }
    

    public void AgregarContenido(Objeto algo)
    {
        this._contenidos.Add(algo);
    }
    public int CantidadDeElementosContenidos()
    {
        return this._contenidos.Count;
    }
    public Objeto(Material material, int volumen)
    {
        this.Material = material;
        this.Volumen = volumen;
        this._contenidos = new List<Objeto>();
    }
    
    
}
