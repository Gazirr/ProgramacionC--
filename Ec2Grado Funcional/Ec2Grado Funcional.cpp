// Ec2Grado Funcional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
using namespace std;
double a;
double b;
double c;
double square;
double calculo_raiz;
double raiz_entera;
double num_1;
double num_2;
double num_sols;
double calculo_final1;
double calculo_final2;

	void intro() {
		cout << ("ax^2 + bx + c = 0") << "\n";
		do {
			cout << ("Pon el coeficiente de a: ") << "\n";
			cin >> a;
		} while (a == 0);
		cout << ("Pon el coeficiente de b: ") << "\n";
		cin >> b;
		cout << ("Pon el coeficiente de c: ") << "\n";
		cin >> c;
	}
	void Calculos() {
		square = pow(b, 2);
		calculo_raiz = square - 4 * a * c;
		double raiz_entera = sqrt(calculo_raiz);
		num_1 = -b + raiz_entera;
		num_2 = -b - raiz_entera;
		calculo_final1 = num_1 / 2 * a;
		calculo_final2 = num_2 / 2 * a;
	}
	void Resultados() {
		if (calculo_raiz !=0.0)
		{
			num_sols = 2;
		}
		if (calculo_raiz == 0.0) {
			num_sols = 1;
		}
		if (calculo_raiz < 0.0) {
			num_sols = 0;
		}

	}
	void MostrarResultados() {
		if (num_sols == 2) {
			cout << "\n" "Las soluciones son: x1: " << (calculo_final1) << " x2: " << (calculo_final2) << "\n";
		}
		if (num_sols == 1) {
			cout << "\n" "La solucion es: " << (calculo_final1) << "\n";
		}
		if (num_sols == 0) {
			cout << "\n" "No tiene solucion" << "\n";
		}
	}

	int main()
	{
		intro();
		Calculos();
		Resultados();
		MostrarResultados();
	}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
