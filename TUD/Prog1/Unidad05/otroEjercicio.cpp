#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm> 

using namespace std;

// consulta
void consultarSaldo(int saldo)
{
    cout << "Tu saldo es $" << saldo << endl;
}

// retiro
void retirarDinero(int &saldo)
{
    int retiro;

    cout << "cuanto desea retirar $";
    cin >> retiro;

    if (retiro <= saldo)
    {
        saldo -= retiro;
        cout << "retiro exitoso tu nuevo saldo es de $" << saldo << endl;
    }
    else
    {
        cout << "dinero insuficiente" << endl;
    }
}

// deposito
void depositoDinero(int &saldo)
{
    int deposito;

    cout << "cuanto desea depositar? $";
    cin >> deposito;

    saldo += deposito;
    cout << "su saldo es de $" << saldo << endl;
}

int main()
{

    int saldo = 100000;
    int opcion = 0;

    // opciones
    while (opcion != 4)
    {
        cout << "===== Cajero =====" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Depositar dinero" << endl;
        cout << "4. salir" << endl;
        cout << "Tu saldo es $" << saldo << endl;
        cin >> opcion;

        // bot贸n opcion
        switch (opcion)
        {
        case 1:
            consultarSaldo(saldo);
            break;
        case 2:
            retirarDinero(saldo);
            break;
        case 3:
            depositoDinero(saldo);
            break;
        case 4:
            cout << "Usted terminó muchas gracias" << endl;
            break;
        default:
            cout << "Opción invalida vuelva a intentar" << endl;
            break;
        }
    }
    return 0;
}