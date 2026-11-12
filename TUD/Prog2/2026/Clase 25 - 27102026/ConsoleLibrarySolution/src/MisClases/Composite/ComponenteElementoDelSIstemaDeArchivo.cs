namespace  MisClases.Composite
{
    public abstract class ComponenteElementoDelSistemaDeArchivo
    {
        private string _nombre;
        public string Nombre
        {
            get { return _nombre; }
            set { _nombre = value; }
        }

        public abstract double ObtenerTamaño();
        public abstract void  Agregar(ComponenteElementoDelSistemaDeArchivo unComponente);
        
    }    
}
