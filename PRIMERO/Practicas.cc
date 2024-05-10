/*------------- Ejericio Practico --------------------*/
/*
    // EL EJERCICIO SE VA TRATAR LA INSTALACION DE UNA TARIMA FLOTANTE - SUELO LAMINADO
    -- ¿ Cuantos metros quieres instalar con calidad media ?
    -- ¿ Cuantos metros quieres instalar con calidad alta ?
    -- Precio m calidad media = 35.5 $
    -- Precio m calidad alta = 55.3 $
    -- IVA 21%
    -- Días validez del presupuesto = 30 dias. */
#include <iostream>
// std: Es para que no se repita las funciones en diferente biblioteca.
using namespace std;
int main(){
    cout << "BIENVENIDO AL SERVICIO INSTALACION DE SUELO LAMINADO" << endl;
    //  -------------------------------- Inicializacion ----------------------------------
    int metros_calidad_media{0};
    int metros_calidad_alta{0};
        // PRECIOS POR M
        const double precio_calidad_media{35.5};
        const double precio_calidad_alta{55.3};
        // IVA
        const double iva{0.21};
        // EXPIRA_PRESUPUESTO
        const int expira_presupuesto{30};
    // --------------------------------Cuerpo ----------------------------------------------------------------
    // Almacenar en variables los metros que desea instalar la persona :
    cout << "\n¿Cuantos metros quieres instalar con calidad media? : ";
    cin  >> metros_calidad_media;
    cout << "\n¿Cuantos metros quieres instalar con calidad alta? : ";
    cin >> metros_calidad_alta;
    // -----------------------------------Salida ---------------------------------
    cout << "===================================================" << endl;
    cout << "\nPresupuesto para instalacion de tarima flotante: " << endl;
    cout << "\nNumeros de metros de calidad media: " << metros_calidad_media << endl;
    cout << "\nNumeros de metros de calidad alta:  " << metros_calidad_alta << endl;
    cout << "\nPrecio de tarima calidad media: " << precio_calidad_media << endl;
    cout << "\nPrecio de tarima calidad alta: " << precio_calidad_alta << endl;
    cout << "IMPORTE: ";
    cout << (precio_calidad_alta*metros_calidad_alta) + (precio_calidad_media*metros_calidad_media) << " $." << endl;
    cout << "IVA: " << ((precio_calidad_alta*metros_calidad_alta) + (precio_calidad_media*metros_calidad_media))*iva << " $." << endl;
    cout << "===================================================" << endl;
    cout << "IMPORTE TOTAL: ";
    cout << (precio_calidad_alta*metros_calidad_alta) + (precio_calidad_media*metros_calidad_media) +
    (((precio_calidad_alta*metros_calidad_alta) + (precio_calidad_media*metros_calidad_media))*iva) << " $.";
    
    cout << " Presupuesto valido durante: " << expira_presupuesto << " dias "; }
