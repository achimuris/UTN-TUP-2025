using MisClases.Composite;

public class Carpeta : ComponenteElementoDelSistemaDeArchivo
{

    private List<ComponenteElementoDelSistemaDeArchivo> elementos;
    public Carpeta(string nombre)
    {
        this.Nombre = nombre;
        this.elementos = new List<ComponenteElementoDelSistemaDeArchivo>();
    }

    public override void  Agregar(ComponenteElementoDelSistemaDeArchivo unComponente)
    {
        this.elementos.Add(unComponente);
    }
    
    public override double ObtenerTamaño()
    {
        double pesoTotal = 0;

        foreach (var unComponente in elementos)
        {
            pesoTotal +=  unComponente.ObtenerTamaño();
        }


        return pesoTotal;
    }
}