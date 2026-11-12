using MisClases.PD;

public class CanalNovedad
{
    private List<Alumno> _alumnos ;
    public List<Alumno> Alumnos  
    {
        get { return _alumnos; }
        set { _alumnos = value; }
    }

    public void Suscribir(Alumno unSuscriptor)
    {
        this.Alumnos.Add(unSuscriptor);
    }
    public void Desuscribir(Alumno unExSuscriptor)
    {
        this.Alumnos.Remove(unExSuscriptor);
    }

    public void Notificar(string laNovedad)
    {
        foreach (var sucriptor in this.Alumnos)
        {
            sucriptor.GetInfo();
            sucriptor.Actualizar();
            System.Console.WriteLine(sucriptor.Nombre + " recibió por " + this.ToString() + ": " + laNovedad );
            sucriptor.GetInfo();
        }
    }

    public CanalNovedad()
    {
        this.Alumnos = new List<Alumno>();
    }
    
}