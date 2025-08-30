#include <iostream>
using namespace std;

struct Episodio {
    int idSerie;
    int nroTemporada;
    int cantDescargas;
    string titulo;
    int nro;
    int fechaUltimaDescarga;
};

void listarSeries(Episodio episodios[], int cantEpisodios){
    int i = 0;
    cout << "Listado de Descargas de Serie" << endl;
    int totalGeneralEpisodiosSeries = 0;
    while(i < cantEpisodios) {
        // Guardamos el primer nivel de corte de control
        int keySerie = episodios[i].idSerie;
        cout << "Serie:" << keySerie << endl;
        int cantEpisodiosSerie = 0, totalDescargasSerie = 0;
        while(i < cantEpisodios && keySerie == episodios[i].idSerie) {
            int keyTemporada = episodios[i].nroTemporada;
            cout << "\tTemporada:" << keyTemporada << endl;
            cout << "\tN. Episodio\tTitulo Episodio\tCant Descargas\tFecha Ult Descarga" <<endl;
            int cantEpisodiosTemp = 0, totalDescargasTemp = 0;
            while(i < cantEpisodios && keySerie == episodios[i].idSerie && keyTemporada == episodios[i].nroTemporada) {
                // Procesamos el registro
                cout <<"\t" << episodios[i].nro << "\t" << episodios[i].titulo << "\t" << episodios[i].cantDescargas << "\t" << episodios[i].fechaUltimaDescarga << endl;
                cantEpisodiosTemp++;
                totalDescargasTemp+=episodios[i].cantDescargas;
                i++;
            }
            cout << "\tEpisodios de la temporada:" << cantEpisodiosTemp << endl;
            cout << "\tTotal de descargas de la temporada:" << totalDescargasTemp << endl<<endl;
            cantEpisodiosSerie+=cantEpisodiosTemp;
            totalDescargasSerie+=totalDescargasTemp;
        }
        cout << "Episodios de la Serie:" << cantEpisodiosSerie << endl;
        cout << "Total de descargas de la serie:" << totalDescargasSerie << endl<<endl;
        totalGeneralEpisodiosSeries+=cantEpisodiosSerie;
    }
    cout << "Episodios totales: " << totalGeneralEpisodiosSeries << endl;
}

int main () {
    // Datos de ejemplo para probar listarSeries con series reales
    Episodio episodios[] = {
        // Lost (idSerie = 1)
        {1, 1, 120, "Piloto", 1, 20240101},
        {1, 1, 135, "Tabula Rasa", 2, 20240103},
        {1, 2, 110, "Man of Science, Man of Faith", 1, 20240201},
        {1, 2, 98, "Adrift", 2, 20240205},
        // The Sopranos (idSerie = 2)
        {2, 1, 200, "The Sopranos", 1, 20240301},
        {2, 1, 180, "46 Long", 2, 20240304},
        {2, 2, 210, "Guy Walks into a Psychiatrist's Office...", 1, 20240401},
        {2, 2, 190, "Do Not Resuscitate", 2, 20240405},
        // Breaking Bad (idSerie = 3)
        {3, 1, 250, "Pilot", 1, 20240501},
        {3, 1, 230, "Cat's in the Bag...", 2, 20240503},
        {3, 2, 270, "Seven Thirty-Seven", 1, 20240601},
        {3, 2, 260, "Grilled", 2, 20240605}
    };
    int cantEpisodios = 12;
    listarSeries(episodios, cantEpisodios);
    system("pause");
    return 0;
}