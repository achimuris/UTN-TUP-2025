namespace MisClases.PoD.TemplateMethod
{
    public abstract class InformeTemplate
    {
        private string _filtro;
        public string FiltroMateria
        {
            get { return _filtro; }
            set { _filtro = value; }
        }
        public abstract void RealizarReporte(List<Alumno> alumnos);
        
        public void MetodoInformeTemplate( )
        {
            List<Alumno> alumnos = ObtenerAlumnos();
            List<Alumno> alumnosFiltrados =  FiltrarAlumnos(this.FiltroMateria, alumnos);
            this.RealizarReporte(alumnosFiltrados);
        }

        private List<Alumno> FiltrarAlumnos(string filtroMateria, List<Alumno> alumnnos )
        {
            List<Alumno> alumnosFiltrados = new List<Alumno>();
            foreach (Alumno unAlumno in alumnnos)
            {
                if (!unAlumno.Activo)
                    continue;


                if (unAlumno.Materia != filtroMateria)
                    continue;
                
                alumnosFiltrados.Add(unAlumno);
            }

            return alumnosFiltrados;
        }

        private List<Alumno> ObtenerAlumnos()
        {
            List<Alumno> alumnos = new List<Alumno>();
            alumnos.Add (new Alumno("Programación I", "Messi, Lionel", true));
            alumnos.Add (new Alumno("Programación II", "Messi, Lionel", true));
            alumnos.Add (new Alumno("Programación II", "Tevez, Carlos", true));
            alumnos.Add (new Alumno("Programación I", "Crespo, Hernán", true));
            alumnos.Add (new Alumno("Programación II", "Batistuta, Gabriel", true));

            return alumnos;
        }
    }    
}
