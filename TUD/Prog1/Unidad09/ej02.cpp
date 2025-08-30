#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
#define CANTIDAD_ELEMENTOS  50


/*
StockEnLocal, ordenado por código del libro, con un registro por cada libro que se encuentra en el local, 
con el siguiente diseño:  
● Código de libro ( 4 dígitos )  
● Autor (cadena) ● Stock en el local (int)  
● Título del libro (cadena)    
● Editorial (cadena)    
● Genero ( cadena)  
*/
struct stockEnLocal
{
    int codigoLibro;
    string autor;
    int stock;
    string titulo;
    string editorial;
    string genero;
};
struct stockEnDeposito
{
    int codigoLibro;
    int stock;
};

struct informe
{
    int codigoLibro;
    char observacion[120];
};

void impirmirStockEnDeposito (stockEnLocal vector[], int cantidadDelementos);
void imprimirInforme (informe informe[], int cantidadElementos);
void realizarInforme(stockEnLocal vectorStockLocal[], int cantidadDeElementosStockLocal, stockEnDeposito vectorStockDeposito[], int cantidadStockDeposito );
int buscarEnDeposito(stockEnDeposito vectorStockDeposito[], int cantidadStockDeposito, int codigoLibro);

int main(int argc, char const *argv[])
{
    /*Declaramos y poblamos los vectores */
    int codigoLibro;
    string autor;
    int stock;
    string titulo;
    string editorial;
    string genero;

     stockEnLocal m_stockEnLocal[] = {
        {1, "Anónimo", 0, "Título", "EditorialA", "Ciencia Ficción"},
        {2, "Anónimo", 10, "HP", "Editorial B", "Ciencia Ficción"},
        {3, "Anónimo", 10, "Un libro", "Editorial B", "Ciencia Ficción"},
        {4, "Anónimo", 10, "Desarrollo en C", "Editorial C", "Ciencia Ficción"},
        {5, "Anónimo", 0, "Otro título", "Editorial D", "Ciencia Ficción"}
    };

    stockEnDeposito m_stockEnDeposito[] = {
        {2,	0},
        {3,	0},
        {4,	0},
    };

    //impirmirStockEnDeposito(m_stockEnLocal, 5);


    realizarInforme(m_stockEnLocal, 5, m_stockEnDeposito, 2);

    return 0;
}
int buscarEnDeposito(stockEnDeposito vectorStockDeposito[], int cantidadStockDeposito, int codigoLibro)
{
    int i = 0;
    for(i = 0; i < cantidadStockDeposito; i++)
    {
        if (codigoLibro == vectorStockDeposito[i].codigoLibro)
        {
            return i;
        }
    }
    //Retornamos -1 porque no lo encontró
    return -1;
}
void realizarInforme(stockEnLocal vectorStockLocal[], int cantidadDeElementosStockLocal, stockEnDeposito vectorStockDeposito[], int cantidadStockDeposito )
{
    int codigoLibro = 0;
    int i = 0;
    int j = 0;
    bool faltaEnDeposito = false;
    bool faltaEnLocal = false;
    informe informe[100];
    while (i < cantidadDeElementosStockLocal)
    {
        faltaEnLocal = false;
        faltaEnDeposito = false;
        if (vectorStockLocal[i].stock == 0)
        {
            faltaEnLocal = true;
        }
        codigoLibro = vectorStockLocal[i].codigoLibro;

        int pos = buscarEnDeposito(vectorStockDeposito, cantidadStockDeposito, codigoLibro);
        cout << "Valor de la pos " << pos << " del libro " << codigoLibro << endl;
        if (pos == -1)
        {
            faltaEnDeposito = false;
        }else{
            if (vectorStockDeposito[pos].stock == 0)
            {
                faltaEnDeposito = false;
            }
        }
        
       if (faltaEnDeposito || faltaEnLocal )
       {
            informe[j].codigoLibro = codigoLibro;
            if (faltaEnDeposito && faltaEnLocal)
            {
                sprintf(informe[j].observacion, "Falta en el local y en el deposito");
            }
            else{
                if (faltaEnDeposito)
                {
                    sprintf(informe[j].observacion, "Falta en el deposito");
                }else{
                    sprintf(informe[j].observacion, "Falta en  el deposito");
                }
                
            }
            
            j++;
       }
       

        
        
        i++;
    }
    
    imprimirInforme (informe, j);
}
void imprimirInforme (informe informe[], int cantidadElementos)
{
    cout << "-------------- Libros faltantes --------------" << endl;
    cout << "Código producto"  << " | Observación" << endl;

    int i =0;
    for (i = 0; i < cantidadElementos; i++)
    {
        cout <<  informe[i].codigoLibro << "|" << informe[i].observacion << endl;
    }
    
    cout << "Total de libros en falta " << cantidadElementos << endl;
}

void impirmirStockEnDeposito (stockEnLocal vector[], int cantidadDelementos)
{
    for (int i = 0; i < cantidadDelementos; i++)
    {
        cout << "[" << i << "]" << vector[i].codigoLibro << " " << vector[i].autor << " - Título " << vector[i].titulo << " stock: " << vector[i].stock << endl;
    }
    
}
