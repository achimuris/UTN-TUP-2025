#include <iostream>
using namespace std;

// Ingresar un valor entero N (< 30)
// y a continuación un conjunto de N elementos.
// Si el último elemento del conjunto tiene un valor menor que 10, imprimir los negativos
// y en caso contrario los demás.

int main() {
    int N = 0;

    cout << "Ingrese una cantidad de elementos (N < 30): ";
    cin >> N;

    if (N <= 0 || N >= 30) {
        cout << "Error! La cantidad debe ser mayor que 0 y menor que 30." << endl;
        return 1;
    }

    int vector[30]; // Definimos un arreglo fijo, máximo 30 elementos

    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor del elemento " << i + 1 << ": ";
        cin >> vector[i];

        if (vector[i] >= 30) {
            cout << "Error! El valor debe ser menor que 30." << endl;
            return 1;
        }
    }

    cout << endl << "Resultados:" << endl;

    if (vector[N - 1] < 10) {
        for (int i = 0; i < N; i++) {
            cout << "Posicion " << i << " - Valor: " << vector[i] * (-1) << endl;
        }
    } else {
        for (int i = 0; i < N; i++) {
            cout << "Posicion " << i << " - Valor: " << vector[i] << endl;
        }
    }

    return 0;
}