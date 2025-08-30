#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[1000];
    int cantidadElementos=0;
    char textoIngresado [10000];
    std::string linea;

    cin >> cantidadElementos;
    
    cout << cantidadElementos << endl;
    cout << endl;

    getline(cin, linea);

    cout << "El texto ingresado es: " << textoIngresado << endl;
    

    
    return 0;
}
