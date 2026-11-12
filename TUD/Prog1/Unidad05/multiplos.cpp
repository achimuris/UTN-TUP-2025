#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
#include <algorithm> 


using namespace std;


int main(int argc, char const *argv[])
{
    int numero = 0;

    cout << "Ingrese el número para conocer su tabla" << endl;    
    cin >> numero ;
    cout << "Ahora vamos a informar la tabla del " << numero << endl;
    int multiplo =0;

    cout << "Ahora imprimimos con el ciclo FOR / PARA o DESDE" <<  endl; 
    for (int i = 1; i <= 10; i++)
    {
        multiplo = numero * i;
        cout << i << " * " <<  numero << " = " << multiplo << endl; 
    }
    
    
    cout << "Ahora imprimimos con el WHILE / MIENTRAS" <<  endl; 

    int i =1;

    while(i <= 10)
    {
        multiplo = numero * i;
        cout << i << " * " <<  numero << " = " << multiplo << endl; 

        i++;
    }


    // cout << "Ahora imprimimos con el DO WHILE " <<  endl; 
    // i = 1;
    // do
    // {
    //     multiplo = numero * i;
    //     cout << i << " * " <<  numero << " = " << multiplo << endl; 
    //     i++;
    // } while (i <= 10);
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "HOLA" << endl; 
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << (i +1) << endl; 
    // }
    
    
    // for (int i = 10; i > 0; i--)
    // {
    //     cout << (i) << endl; 
    // }

    // int veces = 0;

    // cout << "Ingresé la cantidad de veces que desea que lo salude" << endl;    
    // cin >> veces ;
    // for (int i = 0; i < veces; i++)
    // {
    //     cout << "Te estoy saludando por vez " << (i + 1) << endl;
    // }

    // string saludo;
    // cout << "Hola, podes decirme hola o chau..." << endl;
    // cin >> saludo;

    
    
    // do
    // {
    //     std::transform(saludo.begin(), saludo.end(), saludo.begin(), ::tolower);

    //     cout << "Hola, podes decirme hola o chau..." << endl;
    //     cin >> saludo;
    // }while (saludo != "chau");
    
    // int otroNumero;
    // cout << "Ingresé un número" << endl;
    // cin >> otroNumero;
    // while(otroNumero !=0)
    // {
    //     if ((otroNumero % 2) == 0 )
    //     {
    //         cout << "El número " << otroNumero << " es par." << endl;
    //     }else
    //     {
    //         cout << "El número " << otroNumero << " es impar." << endl;
    //     }
        
    //     cout << "Ingresé un número nuevamente" << endl;
    //     cin >> otroNumero;
    // }

    // cout << "Salimos porque ingresaste 0" << endl;

    return 0;
}
