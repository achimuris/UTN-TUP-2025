#include <string>
struct persona
{
    string nombre;
    string apellido;
    int edad;
    long dni;
};

int main(int argc, char const *argv[])
{
    persona pHernan;

    pHernan.nombre = "Hernán";
    pHernan.apellido = "Un ape";
    pHernan.edad = 43;
    pHernan.dni = 321321;

    persona personas [150];

    return 0;
}

