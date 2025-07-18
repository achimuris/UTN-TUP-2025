#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int desde = 0;
    int hasta = 0;
    cin >> desde;
    cin >> hasta;
    bool esPar = false;
    
    //cout<< "Comienzo a imprimir" << endl;
    for(int i = (desde-1); i < hasta; i++) {
        cout << i+1 << endl;
    }
    int diferencia = hasta - desde;
    esPar = diferencia % 2;
    if (esPar)
    {
        cout << "Es par" << endl;
    }else
    {
        cout << "Es impar" << endl;
    }
    

    
    return 0;
}
