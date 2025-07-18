#include <iostream>
using namespace std;

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k);
void imprimirVector(int vector[], int cantidadDeElementos);
int main () {

    int vectorA[5] = {3, 4, 6, 7, 9};
    int vectorB[5] = {2,5, 8, 10, 11};
    int vectorC[10];
    int elementosDeC = 0;
    cout << "Imprimiendo Vector A: " << endl;
    imprimirVector(vectorA, 5);
    cout << endl;
    cout << "Imprimiendo Vector B: " << endl;
    imprimirVector(vectorB, 5);

    cout << "Inicia el proceso de apareamiento enter el vector A y B" << endl;
    apareo(vectorA, 5, vectorB, 5, vectorC, elementosDeC);

    cout << "Imprimiendo Vector C (resultante): " << endl;
    imprimirVector(vectorC, elementosDeC);

    
    return 0;
}

void imprimirVector(int vector[], int cantidadDeElementos)
{
    for (int i = 0; i < cantidadDeElementos; i++)
    {
        cout << vector[i] << " en la posición " << i << endl;
    }
    
}

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k) { 
    // Contadores para la posicion de los vectores A y B.
    int i = 0, j = 0; // Contador para posicionarse en el vector resultante. 
    k = 0; // Mientras pueda comparar valores (al menos uno de los vectores tiene valor) 
    while (i < n && j < m) { // Comparo los valores de los vectores 
        if (vecA[i] < vecB[j]) { // Coloco el elemento de A porque es menor 
            vecC[k] = vecA[i]; // Me muevo en el vector A 
            i++; } 
        else { 
            vecC[k] = vecB[j];
            j++; 
        } 
        // Incremento el contador de la posicion del vector resultante 
        k++; 
    }
    // Paso todos los elementos restantes de A 
    while(i < n) { 
        vecC[k] = vecA[i]; 
        i++; 
        k++; 
    } 
    // Paso todos los elementos restantes de B 
    while(j < m) { 
        vecC[k] = vecB[j]; 
        j++; 
        k++; 
    } 
}