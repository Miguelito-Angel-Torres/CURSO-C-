#include <iostream>
using namespace std;

int main(){
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