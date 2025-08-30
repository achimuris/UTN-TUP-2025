#include <iostream>
#include <cstring>
using namespace std;

struct Presentismo {
    int legajo;
    char materia[30];
    int fecha;
    bool presente;
};

int main() {
    Presentismo presentes[] = {
        {3, "INGLES1", 20200529, true},
        {1, "INGLES1", 20200529, true},
        {1, "PROG1", 20200521, true},
        {2, "PROG1", 20200619, true},
        {2, "PROG2", 20200529, false},
  


    };
        //El orden es legajo materia
    //     Presentismo presentes[] = {
    //     {1, 1, 20200529, false},
    //     {3, 1, 20200529, true},
    //     {1, 2, 20200521, true},
    //     {2, 2, 20200619, true},
    //     {2, 3, 20200529, false},
    //     {2, 3, 20200529, true},
    //     {2, 3, 20200530, false},
    // };
    
    int n = 5;

    int legajoActual = presentes[0].legajo;
    char  materiaActual[30];
    sprintf(materiaActual, "%s\n", presentes[0].materia);
    int totalAusente = 0;
    int i = 0;
    while (i < n) {
        while ( strcmp(presentes[i].materia, materiaActual) != 0 && i < n) {
            // Se detectó el "corte"
            if (!presentes[i].presente)
            {
                totalAusente++;
            }
            i++;
        } 
        cout << "Materia: " << materiaActual << " - Total de ausentes: " << totalAusente << endl;
        totalAusente = 0;

        //Asignamos...
        sprintf(materiaActual, presentes[i].materia);
        
    }

    // Mostrar el listado del última materia
    //cout << "ULTIMA Materia: " << materiaActual << " - Total de ausentes: " << totalAusente << endl;

    return 0;
}