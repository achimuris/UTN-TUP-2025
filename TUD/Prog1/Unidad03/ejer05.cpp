#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad =0;
    cout << "Estimado/a socio/a ingrese su edad: " << endl;
    cin>> edad;
    //cout<< "La edad ingresada es " << edad << endl;
    string categoria;
    if (edad <=12)
    {
        categoria = "menor";
    }
    else
    {
        if (edad <= 18)
        {
            categoria = "cadete";
        }
        else
        {
            if (edad <= 26)
                categoria ="juvenil";
            else
                categoria = "mayor";
        }

    }

    cout << "La categoria del socio es " << categoria << endl;
    

    return 0;
}
