// --------------------------------------  ARRAYS(ARREGLOS) ------------------------------------------------------------------
/* 
    - QUE ES : Estructura de datos que contiene una coleccion de valores del 
               mismo tipo, los valores del array son fijos.
    - ¿PARA QUE?
        Para almacenar valores que normalmente tiene alguna relacion entre si.
    - SINTAXIS:
       -- Declaracion: 
                int mi_matriz[n]  -->  int array_entero[5]{40,50,30,20,10};

                // Inicializamos la variable array
                    const float array_decimal{8}

                    float mi_matriz[array_decimal]{1.2,1.3,1.5,1.6,1.8,1.5,2.8,8.2}

                // Array no especificados:
                    int array_entero[]{15,24,45,........... infinito}
                  
      -- Acceso y Almacenamiento de valores(INDICE).
            int mi_matriz[6]{1,2,3,4,5,6}
            mi_matriz[0] = 1
            mi_matriz[1] = 2
            mi_matriz[2] = 3
            mi_matriz[3] = 4
            mi_matriz[4] = 5
            mi_matriz[5] = 6
 */

#include <iostream>
using namespace std;

int main(){
    // Inicializar arrays muchas formas diferentes
    int matrix[] {10,20,30,40,50,60,70,80,90,100};
    
    cout << matrix[0] << endl;
    cout << matrix[1] << endl;
    cout << matrix[2] << endl;

    // Si no hay elemento el valor del array es cero
    // Inicializacion
    const int personas{10};

    int edades[personas]{15,20,30};

    cout << edades[1] << endl;
    cout << edades[3] << endl;

    // Almacenar el valor en una posicion:

    edades[3] = 40;

    cout << edades[3] << endl;

    // Como cambiar valor de una posicion

    edades[1] = 100;

    cout << edades[1] << endl;

    // Pedir por consola para almacenar el valor en un indice

    cout << "Colocando el valor en la posicion 1: " ;
    cin >> edades[1];

    cout << edades[1] << endl;

};