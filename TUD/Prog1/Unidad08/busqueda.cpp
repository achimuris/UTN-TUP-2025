#include <iostream>

using namespace std;

int buscarSecuencial(int vec[], int cant, int valor);
int main(int argc, char const *argv[])
{
    int miVector[5];
    miVector[0] = 123;
    miVector[1] = 321;
    miVector[2] = 654;
    miVector[3] = 456;
    miVector[4] = 6789;

    int indiceBusqueda = buscarSecuencial (miVector, 5, 3);

    if (indiceBusqueda == -1)
        std::cout << "No encontré el valor buscado en el vector" << std::endl;
    else
        std::cout << "Encontré el valor en la pos " << indiceBusqueda << std::endl;

    /* code */
    return 0;
}

/// @brief Función de búsqueda en un vector de manera secuencial
/// @param vec representa el vector
/// @param cant indica la cantidad de elementos que tiene el vector
/// @param valor indica el valor a buscar dentro del vector
/// @return devuelve el indice dentro del vector
int buscarSecuencial(int vec[], int cant, int valor)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == valor)
        {
            return i;
        }
    }

    //Si no salio todavia, es que no estaba en el vector 
    return -1;
}