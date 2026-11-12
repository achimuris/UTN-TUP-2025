using MisClases;


//Hecho sin aplicar el patron Adapter
// CalculadoraClaseAdaptada objCLaseAdaptada = new CalculadoraClaseAdaptada();
// System.Console.WriteLine("La operación es: " + objCLaseAdaptada.RealizarOperacion(10, 8, TipoOperacion.Suma));
// System.Console.WriteLine("La operación es: " + objCLaseAdaptada.RealizarOperacion(10, 8, TipoOperacion.Resta));
// System.Console.WriteLine("La operación es: " + objCLaseAdaptada.RealizarOperacion(10, 8, TipoOperacion.Multiplicacion));
// System.Console.WriteLine("La operación es: " + objCLaseAdaptada.RealizarOperacion(10, 8, TipoOperacion.Division));


/*Ahora si aplicamos el patron adapter...*/
// ClaseConcretaAdaptada objCalculadora = new ClaseConcretaAdaptada();

// System.Console.WriteLine("La operación es: " + objCalculadora.Sumar(10, 8));
// System.Console.WriteLine("La operación es: " + objCalculadora.Restar(10, 8));
// System.Console.WriteLine("La operación es: " + objCalculadora.Multiplicar(10, 8));
// System.Console.WriteLine("La operación es: " + objCalculadora.Dividir(10, 8));

/*Fin del patrón adapter*/


/* Inicio del patrón Composite */
Carpeta discoC = new Carpeta("Disco C");

Carpeta carpeta1 = new Carpeta("Carpeta 1");
Carpeta carpeta2 = new Carpeta("Carpeta 2");
Archivo archivo1 = new Archivo("Archivo1.txt", 8);
Archivo archivo2 = new Archivo("Archivo2.txt", 10);
carpeta2.Agregar(archivo2);


discoC.Agregar(archivo1);
discoC.Agregar(carpeta1);
discoC.Agregar(carpeta2);

System.Console.WriteLine($"{archivo1.Nombre} + {archivo1.ObtenerTamaño()} kb");
System.Console.WriteLine($"{archivo2.Nombre} + {archivo2.ObtenerTamaño()} kb");


System.Console.WriteLine($"{carpeta2.Nombre} + {carpeta2.ObtenerTamaño()} kb");
System.Console.WriteLine($"{carpeta1.Nombre} + {carpeta1.ObtenerTamaño()} kb");

archivo1.Agregar(archivo2);


System.Console.WriteLine($"{discoC.Nombre} + {discoC.ObtenerTamaño()} kb");