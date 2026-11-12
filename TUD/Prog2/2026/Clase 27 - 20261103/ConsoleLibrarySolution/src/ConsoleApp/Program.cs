//Console.WriteLine("Hello, World!");
using MisClases.Pod.Strategy;
using MisClases.PoD.TemplateMethod;
InformeCVS informe = new InformeCVS("Programación II");

informe.MetodoInformeTemplate();

 
/*Strategy*/
// PedidoOld pedidoOld = new PedidoOld();

// System.Console.WriteLine("Forma erronea...");
// System.Console.WriteLine(pedidoOld.CalcularPrecio(456, "Jubilado"));

// System.Console.WriteLine("Implementando Strategy...");
// Pedido pedidoNuevo = new Pedido( new ClienteJubilado() );
// System.Console.WriteLine(pedidoNuevo.CalcularPrecio(456));