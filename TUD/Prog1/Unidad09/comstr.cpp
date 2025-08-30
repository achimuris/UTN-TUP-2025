#include <iostream>
#include <cstring>
using namespace std;

int main () {
    string cadena1;
    string cadena2;
    sprintf(cadena1, "TEXTO 1\n");
    sprintf(cadena2, "TEXTO 2\n");
    if (strcmp(cadena1, cadena2) == 0)
    {
        cout << "Son iguales" << endl;
    }
    else{
        cout << "Son distintos" << endl;
    }
    

    return 0;
}