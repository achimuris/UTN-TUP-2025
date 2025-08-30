/*
Ej. 1: Se dispone un vector de inscripción de alumnos a exámenes 
finales MAESTROFINALES y otro con las inscripciones del día de hoy 
DIAFINALES, 
ambos ordenados ascendente por código de materia 
y con el siguiente diseño:
Nro de legajo (8 dígitos)
Código de materia (6 dígitos)
ApellidoNombre(cadena)   
Se pide desarrollar un procedimiento que complete un nuevo vector
de inscripciones a finales FINALESACT
resultante del apareo de los dos vectores anteriores,
con el mismo orden y diseño.  

*/

#include <iostream>
#include <string.h>

struct inscripcion
{
    long legajo;
    int codigoMateria;
    char apellidoNombre [30];
};

using namespace std;

void apareo(inscripcion alumnos[], int cantidadAlumnos, inscripcion inscripciones[], int cantidadInscriptos);
void imprimirResultante(inscripcion resultante[]);

struct inscripcion  resultante[100];

int main () {

    inscripcion  MAESTROFINALES[100];
    inscripcion     dia[100];

    MAESTROFINALES[0].legajo = 1;
    MAESTROFINALES[0].codigoMateria = 1;
    sprintf(MAESTROFINALES[0].apellidoNombre, "Chimuris, Andres");

    MAESTROFINALES[1].legajo = 2;
    MAESTROFINALES[1].codigoMateria = 1;
    sprintf(MAESTROFINALES[1].apellidoNombre, "Lopez,Alejo");


    MAESTROFINALES[2].legajo = 3;
    MAESTROFINALES[2].codigoMateria = 1;
    sprintf(MAESTROFINALES[2].apellidoNombre, "Sanchez,Gustavo");


    dia[0].legajo = 2;
    dia[0].codigoMateria = 1;
    sprintf(dia[0].apellidoNombre, "Lopez,Alejo");

    dia[1].legajo = 1;
    dia[1].codigoMateria = 2;
    sprintf(dia[1].apellidoNombre, "Chimuris, Andres");


    apareo(MAESTROFINALES, 3, dia, 2);

    imprimirResultante(resultante);

    return 0;
}

void imprimirResultante(inscripcion resultante[])
{
    int i = 0;
    while ( i < 100 && resultante[i].legajo != 0)
    {

        cout << "Número de legajo " << resultante[i].legajo << " código materia: "  << resultante[i].codigoMateria << " alumno: " <<  resultante[i].apellidoNombre << endl;

        i++;
    }
    
}

void apareo(inscripcion alumnos[], int cantidadAlumnos, inscripcion inscripciones[], int cantidadInscriptos)
{
    int i = 0;
    int j = 0;
    int posResultante = 0;
    while (i < cantidadAlumnos )
    {
        j=0;
        while (j < cantidadInscriptos)
        {            
            // Comparamos el mismo alumno inscripto a la misma materia...
            //cout << "alumnos[i].legajo " << alumnos[i].legajo << " inscripciones[i].legajo: "  << inscripciones[i].legajo << " alumnos[i].codigoMateria: " <<  alumnos[i].codigoMateria << " inscripciones[j].codigoMateria: " << inscripciones[j].codigoMateria  << endl;
            if(alumnos[i].legajo == inscripciones[j].legajo && alumnos[i].codigoMateria == inscripciones[j].codigoMateria)
            {
                resultante[posResultante] = alumnos[i];
                posResultante++;
            }            
            j++;
        }
        i++;
    }
}