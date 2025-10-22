
#include <iostream>
using namespace std;
#define CANTIDAD_DE_ELEMENTOS 8
int busquedaBinaria(int arr[], int n, int x) 
{ // Cuando arranco evalúo todo el vector de 0 a n- 1 
    int inicio = 0; 
    int fin = n-1;
    int iterador = 0; 
    arr[0] = 182;
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
        if (arr[mitad] == x) return mitad ; 
    
        // Si el elemento es menor entonces solo puede estar en la primer mitad 
        if (arr[mitad] > x) { 
            fin = mitad- 1; 
            //Cambio el limite superior 
        } else { 
            inicio = mitad + 1; 
            // Cambio el limite inferior 
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return-1; 
}

int main () {

    int vector[CANTIDAD_DE_ELEMENTOS] = {3, 4, 5, 7, 11, 15, 18, 20};
    int valorBuscado;
    int cantidadDeElementos=8;

    cout<< "Ingrese el elemento a buscar en el vector" << endl;
    cin >> valorBuscado;

    int indice =  busquedaBinaria(vector, CANTIDAD_DE_ELEMENTOS, valorBuscado);
    vector[0]
    if (indice != -1)
    {
        cout << "Encontró " << valorBuscado << " en en vector en la posición " << indice << endl; 
    }else{
        cout << "No encontró el elemento " << valorBuscado << " en en vector" << endl;
    }
    
    return 0;
}


