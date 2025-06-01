#include <iostream>
using namespace std;
#define CANTIDAD_MAXIMA 100 
struct alumnoNota
{
    int legajo;
    char apellido[30];
    int codigoMateria;
    int diaExamen;
    int mesExamen;
    int anioExamen;
};
void imprimirEjercicio5(int codigoMateria, alumnoNota vec[], int largo);
int main () {
    int i = 0;
    alumnoNota alumnos[CANTIDAD_MAXIMA];
    
    cout << "Ingrese el legajo" << endl;
    cin >> alumnos[i].legajo;
    while (alumnos[i].legajo != 0 && i < CANTIDAD_MAXIMA)
    {
        cout << "Ingrese el apellido del alumno" << endl;
        cin >> alumnos[i].apellido;

        cout << "Ingrese el código de materia" << endl;
        cin >> alumnos[i].codigoMateria;


        cout << "Ingrese el día del examen" << endl;
        cin >> alumnos[i].diaExamen;


        cout << "Ingrese el mes del examen" << endl;
        cin >> alumnos[i].mesExamen;

        cout << "Ingrese el año del examen" << endl;
        cin >> alumnos[i].anioExamen;

        i++;
        cout << "Ingrese el legajo" << endl;
        cin >> alumnos[i].legajo;
    }

    int cantidadDeAlumnosNotasIngresados = i;
    int codigoDeMateriaBuscada = 0;
    cout << "Ingrese el código de materia a buscar" << endl;
    cin >> codigoDeMateriaBuscada;

    imprimirEjercicio5( codigoDeMateriaBuscada, alumnos, cantidadDeAlumnosNotasIngresados);
    
    return 0;
}

void imprimirEjercicio5(int codigoMateria, alumnoNota vec[], int largo)
{
    for (int j = 0; j < largo; j++)
    {
        if (codigoMateria == vec[j].codigoMateria)
        {
            cout << vec[j].legajo << " " << vec[j].apellido  << " " << vec[j].diaExamen <<  "/" << vec[j].mesExamen << "/" << vec[j].anioExamen << " " << codigoMateria << endl;
        }
    }
}