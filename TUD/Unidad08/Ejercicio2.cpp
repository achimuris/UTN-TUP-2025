#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()

using namespace std;
#define CANTIDAD_ELEMENTOS 100
#define CANTIDAD_PEDIDOS 999

/*
Dado un vector de productos que contiene 100 registros, 
y cada registro corresponde a un producto que está codificado del 1 a 100,
ordenado por código de producto con el siguiente diseño:
    - Código de producto (1..100) Stock (int)
    y otro vector de pedidos, con el siguiente diseño:  
       cantidadDeElementosúmero de pedido(int) 
       cantidadDeElementosúmero de cliente(long)
        Código de producto (1..100, char)
        Cantidad pedida (int)
        Se pide desarrollar un procedimiento que reciba ambos vectores,
        y procese los pedidos haciendo lo siguiente:
            a) Actualizar el campo stock del vector de productos, por cada pedido que pueda
            ser realizado.
            b) Imprima el listado de los pedidos satisfechos con el siguiente formato:  

*/

struct producto
{
    int codigo;
    int stock;
};

struct pedido
{
    int numeroPedido;
    long numeroCliente;
    //char codigoProducto[3];
    int codigoProducto;
    int cantidadPedido;
};

void ImprimirVector(producto productos[]);
int busquedaBinaria(producto arr[], int cantidadDeElementos, int valorBuscado);
void ProcesarEjercicio2(producto productos[], pedido pedidos[]);

int main () {
 
    producto productos[CANTIDAD_ELEMENTOS];
    pedido pedidos[CANTIDAD_PEDIDOS];

    //Cargamos el vector de pedidos con cantidad 50 de stock
    cout << "Cargando vector de productos" << endl;
    for (int i = 0; i < CANTIDAD_ELEMENTOS; i++)
    {
        productos[i].codigo = i+1;
        productos[i].stock = 50;
    }

    ImprimirVector(productos);

    cout << "Cargando vector de pedidos" << endl;

    for (int i = 0; i < CANTIDAD_ELEMENTOS; i++)
    {
        pedidos[i].codigoProducto =  (i+1);
        if (pedidos[i].codigoProducto == 50)
        {
            pedidos[i].cantidadPedido = 30;
        }else {
            if (pedidos[i].codigoProducto == 49)
            {
                pedidos[i].cantidadPedido = 52;
            }else
            {
                pedidos[i].cantidadPedido = 1;
            }
        }
        
        pedidos[i].numeroPedido = i+1;
        pedidos[i].numeroCliente = 50000;
    }


    ProcesarEjercicio2(productos, pedidos);
    ImprimirVector(productos);

    cout << "Fin" << endl;
    
    return 0;
}

void ImprimirVector(producto productos[])
{
    cout << "**** IMPRIMIENTO EL VECTOR DE PRODUCTOS ****" << endl;

    for (int i = 0; i < CANTIDAD_ELEMENTOS; i++)
    {
        cout << productos[i].codigo << " tiene un total de " << productos[i].stock << " de stock." << endl;

        

    }
    
}

void ProcesarEjercicio2(producto productos[], pedido pedidos[])
{
    int codigoProducto = 0;
    int cantidadSolicitada = 0;
    int indiceProductoBuscado = -1;
    for (int i = 0; i < CANTIDAD_ELEMENTOS; i++)
    {
        codigoProducto = pedidos[i].codigoProducto;
        cantidadSolicitada = pedidos[i].cantidadPedido;
        indiceProductoBuscado = busquedaBinaria(productos, CANTIDAD_ELEMENTOS, codigoProducto);
        
        if (indiceProductoBuscado > -1)
        {
            if (productos[indiceProductoBuscado].stock >= cantidadSolicitada)
            {
                productos[indiceProductoBuscado].stock -= cantidadSolicitada;
            }else
            {
                cout << "No hay stock del producto "  << productos[indiceProductoBuscado].codigo << " porque hay un total de " << productos[indiceProductoBuscado].stock << " y se pide " << cantidadSolicitada << endl;
            }
            
            
        }

    }

}


int busquedaBinaria(producto arr[], int cantidadDeElementos, int valorBuscado) 
{ // Cuando arranco evalúo todo el vector de 0 acantidadDeElementos- 1 
    int inicio = 0; 
    int fin =cantidadDeElementos-1;
    int iterador = 0; 
    while (fin >= inicio) 
    {
        iterador++;
     /*   
        cout << "Iterador: " << iterador << endl;
        cout << "Inicio: " << inicio << endl;
        cout << "Fin: " << fin << endl;
    */
        int mitad = inicio + (fin- inicio) / 2; 
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad].codigo == valorBuscado) return mitad ; 
    
        // Si el elemento es menor entonces solo puede estar en la primer mitad 
        if (arr[mitad].codigo > valorBuscado) { 
            fin = mitad- 1; 
            //Cambio el limite superior 
        } else { 
            inicio = mitad + 1; 
            // Cambio el limite inferior 
        }
    }
    // Si llegamos hasta aca es que el elementocantidadDeElementoso estaba
    return-1; 
}