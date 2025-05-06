// HelloWorld.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
using namespace std; // adjunto la libreria std para  no estar añadiendo a cada string std
double Numero1, Numero2 = 0; //declaro las variables Numero 1 y numero 2
char op;
int main(){
        cout << ("Ingrese Numero1: "); // Le pido el valor al usuario ( El cout es el print de C++)
        cin >> (Numero1); // Con cin es lo que guarda lo que a puesto el usuario
        cout << ("Ingrese Numero2: "); // Le pido el segundo valor al usuario 
        cin >> (Numero2); // Guardo el numero del usuario
        cout << ("Que operador quieres usar? (+,-,*,/): ");
        cin >> (op);
        switch (op){
        case '+'  :
            cout << "El resultado de la suma es: " << (Numero1 + Numero2);
            break;
        case '-':
            cout << "El resultado de la resta es: " << (Numero1 - Numero2);
            break;
        case '*':
            cout << "El resultado de la multiplicacion es: " << (Numero1 * Numero2);
            break;
        case '/':
            cout << "El resultado de la division es: " <<setprecision(2)<<(Numero1 / Numero2);
            break;
        default:
            cout << "El operador invalido";
            break;
        }
        
    }


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
