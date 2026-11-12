namespace MisClases.PoD.TemplateMethod
{
    public class Alumno
    {
        private string _nombreYApellido;
        public string ApellidoYNombre
        {
            get { return _nombreYApellido; }
            set { _nombreYApellido = value; }
        }

        private bool _activo;
        public bool Activo
        {
            get { return _activo; }
            set { _activo = value; }
        }
        private string _materia;
        public string Materia
        {
            get { return _materia; }
            set { _materia = value; }
        }

        public Alumno(string materia, string apellidoynombre, bool activo)
        {
            this.Activo = activo;
            this.ApellidoYNombre = apellidoynombre;
            this.Materia = materia;
        } 
    }
}