#include <iostream>
using namespace std;

struct StockLocal
{
    int codigo;
    int stock;
    string autor;
    string titulo;
    string editorial;
    string genero;
};

struct StockDeposito
{
    int codigo;
    int stock;
};
/**
 * 121      
 * 123      123     
 * 125      125      
 * 
 * 
 * 
 */


void listarStock(StockLocal stockEnLocal[], int cantLocal, StockDeposito stockEnDeposito[], int cantDeposito)
{
    int i = 0, j = 0, cantLibrosConFaltante = 0;
    while (i < cantLocal && j < cantDeposito)
    {
        if (stockEnLocal[i].codigo < stockEnDeposito[j].codigo)
        {
            if (stockEnLocal[i].stock == 0)
            {
                cout << stockEnLocal[i].codigo << "\t" << "Falta en local" << endl;
                cantLibrosConFaltante++;
            }
            i++;
        }

        if (stockEnDeposito[j].codigo < stockEnLocal[i].codigo)
        {
            if (stockEnDeposito[j].stock == 0)
            {
                cout << stockEnDeposito[j].codigo << "\t" << "Falta en deposito" << endl;
                cantLibrosConFaltante++;
            }
            j++;
        }

        if (stockEnLocal[i].codigo == stockEnDeposito[j].codigo)
        {
            if (stockEnDeposito[j].stock == 0 && stockEnLocal[i].stock == 0)
            {
                cout << stockEnDeposito[j].codigo << "\t" << "Falta en ambos" << endl;
                cantLibrosConFaltante++;
            } else if(stockEnDeposito[j].stock == 0) {
                cout << stockEnDeposito[j].codigo << "\t" << "Falta en deposito" << endl;
                cantLibrosConFaltante++;
            } else if(stockEnLocal[i].stock == 0){
                cout << stockEnLocal[i].codigo << "\t" << "Falta en local" << endl;
                cantLibrosConFaltante++;
            } 

            // Me muevo en ambos vectores
            i++;
            j++;
        }
    }

    while (i < cantLocal)
    {
        if (stockEnLocal[i].stock == 0)
        {
            cout << stockEnLocal[i].codigo << "\t" << "Falta en local" << endl;
            cantLibrosConFaltante++;
        }
        i++;
    }

    while (j < cantDeposito)
    {
        if (stockEnDeposito[j].stock == 0)
        {
            cout << stockEnDeposito[j].codigo << "\t" << "Falta en deposito" << endl;
            cantLibrosConFaltante++;
        }
        j++;
    }

    cout << "Total de libros con faltante: " << cantLibrosConFaltante << endl;
}

int main()
{
    StockLocal stockLocal[] = {{123, 1}, {124,0}, {129,4}, {130,0}, {132, 0}};

    StockDeposito stockDeposito[] = {{121,0}, {124,4}, {125,2}, {126,3}, {130,0}, {131,0}, {133,12}, {135,0}};

    listarStock(stockLocal, 5, stockDeposito, 8);

    system("pause");
    return 0;
}