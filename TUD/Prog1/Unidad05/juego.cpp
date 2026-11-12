#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm> 

using namespace std;
int main(int argc, char const *argv[])
{
    int numeroElegido = 0;
    cout << "Ingrese un número entre 1 y 50" << endl;
    cin >> numeroElegido;
    int numeroGanador = 30;
    int cantidadIntentos = 0;
    while (numeroElegido != numeroGanador)    
    {
        if (numeroElegido > numeroGanador)
            cout << "Te pasaste..." << endl;
        else
            cout << "Te quedaste corto..." << endl;

            cout << "Ingrese un número entre 1 y 50" << endl;
    
        cin >> numeroElegido;
        cantidadIntentos++;
    }

    cout << "¡Lo lograste en " << cantidadIntentos << " intentos!"  << endl;
    

    
    return 0;
}
