/*-------------------------------------------Operadores---------------------------------------------------------------------------------s*/
/* Operadores:
    - Asignacion
        -   1:   =               Igual
        -   2:   +=              Mas igual
        -   3:   -=              Menos igual
        -   4:   *=              Por igual
        -   5:   /=              Dividido igual

    - Aritmeticos
        -  a++                 Incremento sufijo
        -  a--                 Decremento sufijo
        - ++a                  Incremento prefijo
        - --a                  Decremento prefijo
    - Comparacion


    - Logicos


    - Nivel bit

*/
#include <iostream>
using namespace std;
int main(){
    // Ejemplo de Asignacion:
    int a = 5;
    int b = 10;
    a +=b;  //a = a + b;
    cout << "El valor de a es " << a << endl;
    // Ejemplo Aritmetico:
    int c = 5;
    int d = 5;
    int z =  ++c;
    // z = c + 1;
    // Prefijo
    cout << "El valor de z es:" << z << endl;
    cout << "El valor de c es:" << c << endl;
    // Sufijo
    // Izquierda a derecha
    int w = d++;
    cout << "El valor de w es:" << w << endl;
    cout << "El valor de d es:" << d << endl;


    //----------------------------- Verificar si es primo o no es primo  -------------------------- :
    /*int num;
    bool es_primo = true;
    cout << "Introduce un numero positivo: ";
    cin >> num;
    for(int i = 2; i <=num/2;i++){
        if(num % i ==  0){
            es_primo = false;
        }
        break;
    }
    if(es_primo){
        cout << num << "El numero es primo" << endl;
    }else{
        cout << num << "El numero no es primo " << endl;
    }*/

    // Seguimos mañana con los operadores. Super largo

}