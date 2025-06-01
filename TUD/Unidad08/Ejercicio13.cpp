#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()
#include <iostream>

using namespace std;
//using namespace std;
/*
13. Ingresar un valor entero CANT (< 50) y a continuación un conjunto SINOR de CANT
elementos. Desarrollar un programa que determine e imprima:
a) El conjunto SINOR en el que cada elemento original se intercambie por su simétrico: A[1] con
A[CANT], A[2] con A[N-1], ..... etc.
b) El conjunto SINOR ordenado de menor a mayor sobre si mismo indicando la posición que
ocupaba cada elemento en el conjunto original.

*/

struct elemento
{
    int valor;
    int pos;
};


void poblarVector(int vector[], int TAM);
void imprimirVector(int vector[], int TAM);
void imprimirVectorDeEstructura(elemento vector[], int TAM);
void burbuejoMejorado(elemento arr[], int n);

int main(int argc, char const *argv[])
{
    int cantidadDeElementos = 5;
    int vector[cantidadDeElementos];
    int sinor[cantidadDeElementos];
    int vectorInvertido[cantidadDeElementos];
    elemento elementos[cantidadDeElementos];
    poblarVector(vector, cantidadDeElementos);
    for (int i = 0; i < cantidadDeElementos; i++)
    {
        elementos[i].valor = vector[i];
        elementos[i].pos = i;
    }
    

    
    int indice=0;
    for (int i = (cantidadDeElementos-1); i >= 0; i--)
    {

        vectorInvertido[indice] = vector[i];
        indice++;
    }
    
    cout<<"Imprimiento vector original" << endl;
    imprimirVector(vector, cantidadDeElementos);

    cout<<"Imprimiento vector invertido" << endl;
    imprimirVector(vectorInvertido, cantidadDeElementos);

    burbuejoMejorado(elementos, cantidadDeElementos);

    cout<<"Imprimiento vector original ordenado" << endl;
    //imprimirVector(vector, cantidadDeElementos);
    imprimirVectorDeEstructura(elementos, cantidadDeElementos);

    return 0;
}

void poblarVector(int vector[], int TAM)
{
    srand(time(nullptr));

    // Cargar vector con valores aleatorios entre 0 y 99
    for (int i = 0; i < TAM; ++i) {
        vector[i] = rand() % 100; // Podés cambiar 100 por otro límite
    }
}


void imprimirVector(int vector[], int TAM)
{
    //std::cout << "Imprimiento el vector" << std::endl;
    for (int i = 0; i < TAM; i++)
    {
        std::cout << "[" << i << "]: " << vector[i] << std::endl;
    }
    
}

void imprimirVectorDeEstructura(elemento vector[], int TAM)
{
    //std::cout << "Imprimiento el vector" << std::endl;
    for (int i = 0; i < TAM; i++)
    {
        std::cout << "[" << i << "]: " << vector[i].valor << " y pos inicial "<< vector[i].pos << std::endl;
    }
    
}

void burbuejoMejorado(elemento arr[], int n)
{ 
    int i, j;
    elemento aux;
    i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    { 
        ordenado = true;
        // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n-i-1; j++)
        { 
            if (arr[j].valor > arr[j+1].valor) 
            { 
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                ordenado = false; // Cambio el flag si hice un swap 
            } 
        } i++; 
    } 
}