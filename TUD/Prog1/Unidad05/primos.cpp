#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <math.h>
#include <algorithm> 
#include <numbers> 

using namespace std;

float CalcularAreaCirculo(float radio);

bool EsPrimo(int numero);



int main()
{

    float elRadio;
    cout << "Ingrese el radio del círculo" << endl;
    cin >> elRadio;
    float areaDelCirculo = CalcularAreaCirculo(elRadio);

    cout << "Él área del circulo con radio " << elRadio << " es " << areaDelCirculo << endl;

    /*
    bool esPrimo = false;
    int numero = 0;
    cout << "Ingrese un numero para saber si es primo o no: ";
    cin >> numero;

    esPrimo = EsPrimo(numero);

    if (esPrimo)
    {
        cout << "El numero " << numero << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << numero << " NO es primo" << endl;
    }

    numero  = 957;
    esPrimo = EsPrimo(numero);

    if (esPrimo)
    {
        cout << "El numero " << numero << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << numero << " NO es primo" << endl;
    }*/


    return 0;
}

bool EsPrimo(int numero)
{
    bool esPrimo = true;
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            esPrimo = false;

            cout << "El numero " << numero
                 << " es divisible por " << i << endl;

            break;
        }
    }

    return esPrimo;
}

float CalcularAreaCirculo(float radio)
{
    float area = radio * radio * 3.14; 

    return area;
}