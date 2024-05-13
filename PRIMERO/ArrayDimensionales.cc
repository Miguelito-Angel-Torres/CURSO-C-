/* -------------------------------Arrays dimensionales --------------------------------------------------/*
/* 4 filas y 2 columnas*/
/*Ejemplo:  int mi_matriz[4][2] = {10,20,30,40,50,60,70,80}
            int mi_matriz[4][2] = {
                                    {10,20},
                                    {30,40},
                                    {50,60},
                                    {70,90}
                                   };

 */
#include <iostream>
using namespace std;
int main(){
    // Este array dimensional contiene 4 filas con 2 columnas.
    /*int mi_matriz[4][2] =  {
                            10,20, // fila 0  -> columna 0  columna 1
                            30,40, // fila 1 -> columna 0  columna 1
                            50,60, // fila 2 -> columna 0  columna 1
                            70,80  }; // fila 3 -> columna 0  columna 1*/

    // Recorrer el array dimensional y agregar valores:
    
    // # Agregar valores por cada fila y columna
    /*
        int mi_matriz2[4][5] = {
                                 0,0,0,0,0,
                                 0,0,0,0,0,
                                 0,0,0,0,0,
                                 0,0,0,0,0,
                                }
    
    */
    int mi_matriz2[4][5];
    // for : indica que vamos hacer recorridos.
    // Filas
    for(int fila=0;fila<4;fila++){
        // Columnas
        for(int columna=0;columna<5;columna++){
            // cin funcion que pide valor en la consola
            cout << "Ingrese en la fila " << fila + 1 << " en la columna " << columna + 1 << " : ";
            cin >> mi_matriz2[fila][columna];
        }
    };
    cout << "Visualizamos ahora los valores almacenados en el array" << endl;

    for(int fila = 0; fila < 4; fila++){
        for(int columna= 0; columna<5; columna++){
            cout << mi_matriz2[fila][columna] << " " ;
        }
        cout << endl;
    }
};