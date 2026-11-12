#include <iostream>
using namespace std;
#define CANTIDAD_MAXIMA 100
void insertionSort(int arr[], int n);
void burbujeo(int arr[], int n);
void imprimirVector(int arr[], int n);
void burbuejoMejor(int arr[], int n);
int main()
{
    int i = 0;
    int miVector[5] = {12, 11, 13, 5, 6};
    imprimirVector(miVector, 5);
    cout << "Comienzo a ordenar" << endl;
    // insertionSort(miVector, 5);
    //burbujeo(miVector, 5);
    burbuejoMejor(miVector, 5);
    imprimirVector(miVector, 5);
    return 0;
}

void burbuejoMejor(int arr[], int n)
{
    int i, j, aux;
    i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}

void imprimirVector(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Posición: " << i << ": " << arr[i] << endl;
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    cout << "Comienza a ordenar insertionSort" << endl;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        /* Movemos los elementos de arr[0..i-1], que son
        mas grandes que key, a la posicion siguiente
        a su posicion actual */
        cout << "Valor de key: " << key << endl;
        cout << "Valor de arr[j] : " << arr[j] << endl;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Finalizó la ordenación de insertionSort" << endl;
}

void burbujeo(int arr[], int n)
{
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
    {
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}
