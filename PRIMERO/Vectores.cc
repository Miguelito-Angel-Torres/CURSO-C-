#include <iostream>
using namespace std;
#include <vector>

int main(){
    // Si no se coloca valores determinado sus valores son 0
    // Vectores libres

    vector <int> numeros;
    
    vector <char> letras;
    // Vectores con caracteres determinados 
    vector <int> numeros1{10,20,30,40,50};
    vector <char> letras1{'x','t','d','y','u','a'};

    // Recorrido con For, para saber que contiene un vector

    // Numero:
    for(int i = 0; i < (numeros1.size()); i++){
        
        cout << numeros1[i] << endl;
    }

    cout << "==============================================";

    // Char:
    for(int i = 0; i<6;i++){
        cout << letras1[i] << endl;
    }

    // Valor que se almacenar por defecto en los valores determinados
    vector <double> salarios(200,2000);
    // While
    int i = 0;
    while(i<salarios.size()){
        cout <<salarios[i] <<  endl;
        i = i  + 1 ;
    }

    // 
};