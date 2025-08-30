#include <iostream>
using namespace std;
#define CANT_ARTICULOS 30
#define CANT_SUCURSALES 4

struct Movimiento
{
    int codArticulo;
    int codSucursal;
    char tipoMovimiento;
    int cantidad;
};

void procesarSemana(int stockInicial[CANT_ARTICULOS][CANT_SUCURSALES], Movimiento movimientos[], int cantMovimientos)
{

    for (int i = 0; i < cantMovimientos; i++)
    {
        int filaStockInicial = movimientos[i].codArticulo;
        int columnaSotckInicial = movimientos[i].codSucursal;

        int cantidad = movimientos[i].cantidad;
        if (movimientos[i].tipoMovimiento != 'E')
        {
            cantidad = cantidad * -1;
        }
        stockInicial[filaStockInicial][columnaSotckInicial] += cantidad;
    }
}

void imprimirListados(int stock[CANT_ARTICULOS][CANT_SUCURSALES])
{
    int articulosSinStock[CANT_ARTICULOS];
    int cantArticulosSinStock = 0;

    for (int i = 0; i < CANT_ARTICULOS; i++)
    {
        cout << "Articulo: " << i << endl;
        int ventas = 0;
        for (int j = 0; j < CANT_SUCURSALES; j++)
        {
            ventas += stock[i][j];
            cout << "Sucursal " << j << ": ";
            cout << stock[i][j] << endl;
        }
        cout << endl;

        if (ventas <= 0)
        {
            articulosSinStock[cantArticulosSinStock] = i;
            cantArticulosSinStock++;
        }
    }

    cout << "Articulos sin stock" << endl;
    for (int i = 0; i < cantArticulosSinStock; i++)
    {
        cout << "Articulo " << i << endl;
    }
}

int main()
{

    int stockInicial[CANT_ARTICULOS][CANT_SUCURSALES];
    Movimiento movimientos[100];

    procesarSemana(stockInicial, movimientos, 100);

    imprimirListados(stockInicial);

    system("pause");
    return 0;
}