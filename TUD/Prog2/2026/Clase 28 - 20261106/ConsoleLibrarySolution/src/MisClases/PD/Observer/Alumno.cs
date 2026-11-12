namespace MisClases.PD;

public class Alumno : ISuscribible
{
    private string _nombre;
    public string Nombre
    {
        get { return _nombre; }
        set { _nombre = value; }
    }
    private DateTime _ultimaNovedad;
    public DateTime FechaUltimaNovedad
    {
        get { return _ultimaNovedad; }
        set { _ultimaNovedad = value; }
    }

    private CanalNovedad _canalSuscripto;
    public CanalNovedad CanalDeNovedad
    {
        get { return _canalSuscripto; }
        set { _canalSuscripto = value; }
    }
    
    

    public Alumno(string nombre)
    {
        this.Nombre = nombre;
    }
    
    public void Actualizar()
    {
        this.FechaUltimaNovedad = DateTime.Now;
    }
    public void GetInfo()
    {
        if(this.FechaUltimaNovedad == null || this.FechaUltimaNovedad == default(DateTime)  )
            System.Console.WriteLine($"{this.Nombre} nunca recibió la última novedad " );
        else
            System.Console.WriteLine($"{this.Nombre} recibió la última novedad {this.FechaUltimaNovedad.ToShortDateString()}" );
    }
    
}