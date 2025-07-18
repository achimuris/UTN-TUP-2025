#include <iostream>
using namespace std;

struct Venta {
    int clienteId;
    float monto;
};

int main() {
    Venta ventas[] = {
        {1, 100},
        {1, 150},
        {2, 200},
        {2, 150},
        {3, 300}
    };
    
    int n = 5;

    int clienteActual = ventas[0].clienteId;
    float totalCliente = 0;

    for (int i = 0; i < n; i++) {
        if (ventas[i].clienteId != clienteActual) {
            // Se detectó el "corte"
            cout << "Cliente " << clienteActual << " - Total ventas: $" << totalCliente << endl;
            // Cambio de cliente
            clienteActual = ventas[i].clienteId;
            totalCliente = 0;
        }
        totalCliente += ventas[i].monto;
    }

    // Mostrar el total del último cliente
    cout << "Cliente " << clienteActual << " - Total ventas: $" << totalCliente << endl;

    return 0;
}