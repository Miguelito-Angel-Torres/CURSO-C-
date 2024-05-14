// ---------------------- Vectores - Funciones AT() Y PUSK_BACK() ---------------------------------------
#include <iostream>
using namespace std;

// Biblioteca vector para llamar la clase vector.
#include <vector>

int main(){
    // Creacion de un Vector con el tipo int
    vector <int> numeros {10,20,30,40,50};

    // AT() : Es una funcion que accede al elemento en la posicion correspondiente en caso que no hay elemento
    // en esta posicion coloca un aviso.

    cout << "Correctamente: ";
    cout << numeros.at(0) << endl;
    cout << "====================================" << endl;
    //cout << " Va verificar si contiene el elemento en esta posicion: ";
    //cout << numeros.at(5);
    //cout << "====================================" << endl;

    // PUSK_BACK : Es una funcion que sirve para agregar elemento en posicion final.
    numeros.push_back(60);
    // verificar con un for:
    for(int i = 0 ; i < numeros.size();i++){
        cout << numeros.at(i) << endl;
    }
    cout << " Cuantos elementos quieres que tenga el vector: ";
    int elementos = 0;
    // La consola va pedir cuantos elementos deseamos para el array
    cin >> elementos;
    // Creacion de una variable que va ser un bucle con la funcion pus_back
    int almacenarnumero = 0;
    // No se indica los valores de un vector lo coloca en general todos los valores en 0;
    vector <int> numerales(elementos);
    for(int i=0;i<elementos;i++){
        cout << " Introduce el elemento del vector  n " << i + 1 << endl;
        cin >> almacenarnumero;
        numerales.push_back(almacenarnumero);
    }
    cout << "A continuacion te muestro los elementos almacenados en el vector:" << endl;
    for(int j=0; j < numerales.size();j++){
        //cout << numerales.at(j) << endl; cout << numerales[j] << endl;
    }
};