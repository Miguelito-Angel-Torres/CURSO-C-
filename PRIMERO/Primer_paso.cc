// ----------------------------------------SE ENCUENTRA EN EL GITHUB----------------------------------------
/*1. -----------------------------------------INICIO-------------------------------------------------------*/
//                                                          <iostream> la biblioteca para usar la funcion cout
#include <iostream> 
/*Sentencia std : Indica que no puede aver dos funciones con el mismo nombre para imitar */
using namespace std; 
        // main(): siempre va ser la funcion principal en caso que varias funciones
        // {} indica que todo adentro se va ejecutar
        // () parentesis se usan para colocar parametros is es opcional 

// Indicar la funcion que vamos usar en el main()
void  tipos_variables();
void  declaracion_variables_constantes();
void  arrays();
void arraysdimensionales();
void vectores();
int main(){
    // cout es una herramienta para colocar en consola
    // endl es una funcion de la biblioteca <iostream> que va realizar un salto de linea
    cout << "Seguir a Tom Angel" << endl;
    cout << "Un mensaje me ayudaria bastante" << endl;

    //tipos_variables();
    
    //declaracion_variables_constantes();
    
    //arrays();
    
    //arraysdimensionales();

    vectores();
    return 0;
}
/* Hay funciones que devuelve valores : todo la funcion llamado VOID no devuelve valor y no contiene void devuelve un valor*/   

/* 2: ------------------------------ TIPOS Y VARIABLES ----------------------------------------------- */
/* 4 TIPOS : CARACTERES , ENTEROS , DECIMALES , BOOLEANOS
Unsigned: Indica que vamos usar solo numeros positivo se duplica su rango 
    ejemplo: unsigned short;
/ CARACTERES:  
    descripcion: Caracter o entero pequeño  
    Tamaño: 1 byte
    - char
/ ENTEROS: 
    -short 
    - int 
    - long
    - long long
/ DECIMAL : 
    - float
    - double
    - long double
/ BOOLEANO
    - bool Rango de Valor es true/false o 1/0
Variables: 
    Almacena datos
    informacion en manera constante
    es un espacio en la memoria del ordenador que puede variar dependiendo la ejecucion de un programa (variar)
    todo variable un nombre y un tipo
*/
void tipos_variables(){
      // 2 ==========================================================================================================
    // Declarar una variable: Se almaceno un valor numerico en el ordenador
    // Primer caso:
    int sueldo = 3500;
    // Segundo caso: indicando que mas adelante colocare el valor de la variable
    int sueldo1;
    sueldo1 = 5000;
    sueldo = 8000;

    cout << "===================================================" << endl;
    cout << sueldo << endl;
    cout << sueldo1 << endl;
};
/*3: -------------------- DECLARACIONES E INICIALIZACION DE VARIABLES--------------------------------------------------------------*/
/* 
    ------ DECLARACION DE VARIABLES -- (REGLAS)

    - Primer caracter debe ser una letra o guion bajo               ejemplo incorrecto : 545Edad    correcto : edad   edad_docente 
    - No se permite espacios en blanco :                            ejemplo incorrecto : edad docente  correcto: edad_docente
    - Intentar no crear nombres com muchos caracteres               ejemplo incorrecto : edad$._  correcto: edad
    - Evitar utilizar caracter tipo $ 
    - No utilizar palabras reservadas                               ejemplo incorrecto : este es un funcion count y no puedes colocar count como variable
    - No se puede declarar la misma variable 2 veces
    con el mismo nombre en el mismo ambito                          ejemplo incorrecto : int numeros_enteros = 1  int numeros_enteros = 1 correcto : una sola vez
    - C++ es case sensite                                           distingue entre mayuscula y minuscula
    ------- BUENAS PRACTICAS - DECLARACION DE VARIABLES

    - Coherente con tus propias convenciones                        ejemplo: en caso que estas usando variables que se inicializa con Mayuscula que sea 
                                                                    asi en todas las variables Numero_enteros  numero_decimal  num_dec
                                                                    correcto : Numero_enteros  Numero_decimal  Num_dec
    - Utliza nombres descriptivos, ni demasiado cortos ni demasiado largos    incorrecto : numero_entero_tal_tal_taldia_aquehora 
                                                                              correcto : numero_entero o todo caso num_entero
    - Intentar declarar variables cercanas a la zona de uso                   creacion de una variable por ejemplo incorrecto 
                                                                                        int numero; 1000000000 codigos por adelante numero = 5         
    -Evitar nombres de variables que comiencen por guion bajo        ejemplo incorrecto : _numero_entero

    -- INCIALIZACION DE VARIABLES:
        int z   <------------------------ Sin inicializar
        int z = 5  <----------------------- Inicializacion tradicional
        // Otra forma
        int z(5)  <------------------------ Inicializacion de constructor                            -- Mas se trabaja con clases
        int z{5} <-------------------------- Inicializacion de lista                                  -- narrowing

*/
/*4. Constantes : El contenido de la variable no se cambia */
/*  TIPOS DE CONSTANTES:
      - Constantes literales:    \n \t  \b  etc
      - Constantes declaradas:   Palabra reservadas const
      - Expresiones constantes:  Palabra reservadas constexpr
      - Constantes enumeradas:   Palabra reservada enum
      - Constantes definidas:    Directiva #define(obsoleto)     # Ejemplo: (Ya no se declara asi: ) #define int precio = 50;
*/
void declaracion_variables_constantes(){
    // OJO LA EJECUCION VA DE ARRIBA HACIA ABAJO
    cout << "=======================================================" << endl;
     /*Se va pedir el salario de un empleado en tiempo de ejecucion*/
    // --------------------------Declaracion----------------------------
    // Nombre del Empleado debe ser una constante(Porque no va cambiar): El constante mas se usa en id,nombres,numero de certificado,etc.
    const string nombre_em = "TomAngel";
    // Edad del empleado:
    int edad_em{21};
    // El salario del empleado, no esta inicializado mas adelante.
    double salario_em;

    // ---------------------Cuerpo-------------------------------------------
    // Pedir el salario por consola.
    cout << "Introduce el salario del empleado: ";
    // En tiempo de ejecucion nos va pedir el salario del empleado
    cin >> salario_em;
    // En tiempo de ejecucion nos va pedir la edad del empleado
    cout << "Introduce la edad del empleado: ";
    cin >> edad_em;

    // ----------------------- Salida -----------------------------------
    // Para ver los datos:
    cout << "---------------------------------------------------------" << endl;
    cout << "Datos del empleado " <<endl;
    cout << "Nombre:" << nombre_em << " . Edad: " << edad_em << " . Salario " << salario_em;

};

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
// DECLARACIONES  DE ARRAYS:

void arrays(){
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
void arraysdimensionales(){
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
            cout << mi_matriz2[fila][columna];
        }
        cout << endl;
    }
};
/*------------------------------------------------------------------- Vectores ------------------------------------------------------*/
/*
    ¿ Que es un vector?
    - Vector es una (CLASE) de la libreria Estandar de C++. Esta clase crea estructuras contenedoras para almacenar datos secuenciales.
    (Puede varias la capacidad).
    - Los vectores pueden crecer o decrecer en tamaño de forma dinamica.
    - Tienen una sintaxis muy similar a los Arrays (pero no son iguales).
    - Proporcionan multiples metodos para chequear limites , tamaños , comprobar si existe un elemnto , etc .
    - Almacenan los valores en posiciones contiguas de la memoria y tambien en posiciones separadas accesibles a traves de punteros.
    // Importancia:
        - Tamaño dinamico
        - Los elementos almacenados en su interior son del mismo tipo
        - Se accede a los elementos almacenados con su posicion o indice
        - El primer elemento tiene indice 0
        - El ultimo elemento tiene indice size - 1
        - Se suele interaccionar con ellos utilizando bucles
*/
// Incluyendo la biblioteca vector
#include <vector>

void vectores(){
    // Si no se coloca valores determinado sus valores son 0
    // Vectores libres

    vector <int> numeros;
    
    vector <char> letras;
    // Vectores con caracteres determinados 
    vector <int> numeros1{10,20,30,40,50};
    vector <char> letras1(6);

    // Valor que se almacenar por defecto en los valores determinados
    vector <double> salarios(200,2000);

    // Recorrido con For, para saber que contiene un vector

    // Numero:
    for(int i = 0; i < 5; i++){
        
        cout << numeros1[i] << endl;
    }

    cout << "==============================================";

    // Char:
    for(int i = 0; i<6;i++){
        cout << letras1[i] << endl;
    }

}