// CalculadoraFuncional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int num1;
int num2;
int suma = 0;
int resta = 0;
int mult = 0;
double divi = 0;

void pedirValores() {
    cout << "Dime el primer  valor ";
    cin  >>  num1;
    cout << "Dime el segundo valor ";
    cin >> num2;
}
 void Sumar() {
    suma = num1 + num2;
}
 void Resta() {
     resta = num1 - num2;
}
void Mult() {
     mult = num1 * num2;
}
void Divi() {
     divi = num1 / num2;
}
void Calculos() {
    Sumar();
    Resta();
    Mult();
    Divi();
}
void Resultado() {
    cout << "El resultado de la suma de " << num1 << " + " << num2 << " = " <<  suma << "\n";
    cout << "El resultado de la resta de " << num1 << " - " << num2 << " = " << resta << "\n";
    cout << "El resultado de la multiplicacion de " << num1 << " * " << num2 << " = " << mult << "\n";
    cout << "El resultado de la division de " << num1 << " / " << num2 << " = " << divi << "\n";
}
int main()
{
    pedirValores();
    Calculos();
    Resultado();
    system("pause");
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
