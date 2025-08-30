#include <iostream>
using namespace std;
#define MAX_INSCRIPCION 100

struct Inscripcion {
    int legajo;
    int codMateria;
    string apellidoNombre;
};

void apareo(Inscripcion maestro[], int cantMaestro, Inscripcion diario[], int cantDia, Inscripcion actualizado[], int &cantActualizado) {
    cantActualizado = 0;
    int i = 0, j = 0;
    while(i < cantMaestro && j < cantDia) {
        if(maestro[i].codMateria < diario[j].codMateria) {
            actualizado[cantActualizado] = maestro[i];
            i++;
        } else {
            actualizado[cantActualizado] = diario[j];
            j++;
        }

        cantActualizado++;
    }

    while(i < cantMaestro) {
        actualizado[cantActualizado] = maestro[i];
        i++;
        cantActualizado++;
    }

    while(j < cantDia) {
        actualizado[cantActualizado] = diario[j];
        j++;
        cantActualizado++;
    }

    return;
}

void imprimir(Inscripcion vect[], int cant) {
    cout << "COD MAT\t\tLEGAJO\t\tAPELLIDO" << endl;
    for (int i = 0; i < cant; i++)
    {
        cout << vect[i].codMateria << "\t\t" << vect[i].legajo << "\t\t" << vect[i].apellidoNombre << endl;
    }
}

/***
 * LISTADO DE INSCRIPCIONES
 * 
 * COD MATERIA:99999
 * LEGAJO   APELLIDO
 * XXXXX    XXXXXXX
 * INCRIPTOS:9999
 * 
 * TOTAL INSCRIPTOS:99999
 * 
*/
void imprimirListado(Inscripcion inscripciones[], int cant) {
    int i = 0;
    cout << "LISTADO DE INSCRIPCIONES" << endl << endl;
    while (i < cant)
    {
        int key = inscripciones[i].codMateria;
        int inscriptosXMarteria = 0;
        cout << "COD MATERIA:" << key << endl;
        cout << "LEGAJO\t\tAPELLIDO" <<endl;
        while(i < cant && key == inscripciones[i].codMateria) {
            cout << inscripciones[i].legajo << "\t\t" << inscripciones[i].apellidoNombre << endl;
            inscriptosXMarteria++;
            i++;
        }
        cout << "INSCRIPTOS:" << inscriptosXMarteria << endl << endl;
    }
    cout << endl;
    cout << "TOTAL INSCRIPCIONES:" << cant << endl;

}

int main()
{
    Inscripcion maestro[] = {{1170909,101,"Leo"},{124343,101,"Juan"},{1023232,101,"Pedro"},{1170909,102,"Leo"},{1170909,103,"Leo"},{165498,104,"Carlos"},{1170909,104,"Leo"},{1023232,104,"Pedro"}};
    Inscripcion diario[] = {{1023232,102,"Pedro"}, {165498,103,"Carlos"}};

    int cantAct = 0;
    Inscripcion actualizados[MAX_INSCRIPCION];

    apareo(maestro, 8, diario, 2, actualizados, cantAct);

    imprimir(actualizados, cantAct);

    imprimirListado(actualizados, cantAct);

    system("pause");
    return 0;
}