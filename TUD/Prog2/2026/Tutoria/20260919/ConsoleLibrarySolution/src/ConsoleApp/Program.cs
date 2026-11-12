using MisClases;

Objeto unObjeto = new Objeto(Material.Cuero, 199);
unObjeto.AgregarContenido(unObjeto);

Console.WriteLine("La cantidad de elementos en el objeto es de " + unObjeto.CantidadDeElementosContenidos() );
