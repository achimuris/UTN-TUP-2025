#include <iostream>
using namespace std;

//Funciones locales
void imprimirCicloWhile();
void imprimirCicloDoWhile(int cantidadDeVeces);
void realizarSuma(int numero1, int numero2);
int suma(int numero1, int numero2);
double factorial(int n);

void imprimirCicloFor(int cantidadDeVeces)
{
    for (int i = 0; i < cantidadDeVeces; i++)
    {
        cout << "Imprimo algo desde el for..." << ++i << endl;
    }
    
}


//Variables globales
// int gCantidad = 0;

int main () {
    imprimirCicloWhile();
    imprimirCicloDoWhile(5);
    imprimirCicloFor(8);
    imprimirCicloFor(8);
    // realizarSuma(3, 5);
    double factorialDe5 = factorial(5);
    cout << "El factorial de 5 es " << factorialDe5 << endl;
 
    return 0;
}

int suma(int numero1, int numero2)
{
    return numero1 + numero2;
}

void realizarSuma(int numero1, int numero2)
{
    int laSuma = suma(numero1, numero2);
    cout << "La suma de " << numero1 << " + " << numero2 << " es igual a: " << laSuma << endl;
}



void imprimirCicloWhile()
{
    int iDelWhile = 0;
    while (iDelWhile < 10)
    {
        cout << "Imprimo algo..." << iDelWhile << endl;
        iDelWhile++;
    }
}

void imprimirCicloDoWhile(int cantidadDeVeces)
{
    int iDelDoWhile = 0;
    do
    {
        cout << "Imprimo algo en el do while..." << iDelDoWhile << endl;
        iDelDoWhile++;
    } while (iDelDoWhile < cantidadDeVeces);
}
double factorial(int n)
{
    cout << "Nos llegó el valor de N = " << n << endl;
    if (n == 0)
        return 1;
    else
        return n * factorial(n -1);
}