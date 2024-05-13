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

int main(){
    // cout es una herramienta para colocar en consola
    // endl es una funcion de la biblioteca <iostream> que va realizar un salto de linea
    cout << "Seguir a Tom Angel" << endl;
    cout << "Un mensaje me ayudaria bastante" << endl;

    //tipos_variables();
    
    //declaracion_variables_constantes();
    return 0;
}




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

