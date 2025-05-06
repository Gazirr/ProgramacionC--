// Ec2Grado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
double a;
double b;
double c;
double square;
int main()
{
	cout << ("ax^2 + bx + c = 0") << "\n";
	cout << ("Pon el coeficiente a :") << "\n";
	cin >> a;
	cout << ("Pon el coeficiente b : ") <<"\n";
	cin >> b;
	cout << ("Pon el coeficiente c : ")<< "\n";
	cin >> c;
	double square = pow(b, 2);
	double calculo_raiz = square - 4 * a * c;
	if (calculo_raiz < 0) {
		cout << ("No se Puede calcular");
	}
	else
	{
		double raiz_entera = sqrt(calculo_raiz);
		double num_1 = -b + raiz_entera;
		double num_2 = -b - raiz_entera;
		double calculo_final1 = num_1 / 2 * a;
		double calculo_final2 = num_2 / 2 * a;
		cout << " Las soluciones son: " << "\n" << "1: " << (calculo_final1) << "\n" << "2: " << (calculo_final2) << "\n";
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
