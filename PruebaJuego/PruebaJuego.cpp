// PruebaJuego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
using namespace std;

/* VARIABLES GLOBALES */
int option;
bool turno = false;
int attack;

void inicio() {
    do
    {
        cout << "Chose a Character:" << endl;
        cout << "1.- Hero" << endl;
        cout << "2.- Enemy" << endl;
        cin >> option;
        if (option == 1) {
            turno = true;
        }
        else if (option == 2) {
            turno = false;
        }
        else {
            cout << "Invalid value. Please select again";
        }
    } while (option != 1 && option != 2);
    
}
void ataque(int option) {

    int vidahero = 100;
    int vidaenemy = 100;
    int firstatack = 20;
    int secondatack = 30;
    int firstatackenemy = 20;
    int secondatackenemy = 25;

    random_device rd;
    mt19937 ran(rd());
    uniform_int_distribution<> dis(0, 1);

    if (option == 1) {
        while (vidaenemy > 1 && vidahero > 1) {
            cout << "Choose Attack" << endl;
            cout << "1.- FirstAttack" << endl;
            cout << "2.- SecondAttack" << endl;
            cout << "3.- Surrender" << endl;
            cin >> attack;
            if ((option == 1) && (turno == true)) {
                switch (attack) {
                case 1:
                    vidaenemy -= firstatack;
                    cout << "The atack destroys the enemy with a pain of " << firstatack << " his health is " << vidaenemy << endl;
                    break;
                case 2:
                    vidaenemy -= secondatack;
                    cout << "The atack destroys the enemy with a pain of " << secondatack << " his health is " << vidaenemy << endl;
                    break;
                case 3:
                    cout << "You surrender" << endl;
                    vidahero = 0;
                    break;
                default:
                    cout << "error" << endl;
                }
                turno = false;

            }
            if ((option == 1) && (turno == false)) {
                int attackenemy = dis(ran);
                if (attackenemy == 0) {
                    vidahero -= firstatackenemy;
                    cout << "The atack destroys the hero with a pain of " << firstatackenemy << " his health is " << vidahero << endl;
                }
                if (attackenemy == 1) {
                    vidahero -= secondatackenemy;
                    cout << "The atack destroys the hero with a pain of " << secondatackenemy << " his health is " << vidahero << endl;
                }
                turno = true;
            }
            if ((vidaenemy <= 0) && (vidahero >= 1)) {
                cout << "The hero wins and  saved the village" << endl;
            }
            else if ((vidahero <= 0) && (vidaenemy >= 1)) {
                cout << "The enemy Wins and destroys the village" << endl;
            }
            else if ((vidaenemy <= 0) && (vidaenemy <= 0)) {
                cout << "Both are dead its a draw" << endl;
            }

        }
    }
            else {
            while (vidaenemy > 1 && vidahero > 1) {
            cout << "Choose Attack" << endl;
            cout << "1.- FirstAttack" << endl;
            cout << "2.- SecondAttack" << endl;
            cout << "3.- Surrender" << endl;
            cin >> attack;

            if ((option == 2) && (vidaenemy > 1) && (turno == false)) {
                switch (attack) {
                case 1:
                    vidahero -= firstatackenemy;
                    cout << "The atack destroys the hero with a pain of " << firstatackenemy << " his health is " << vidahero << endl;
                    break;
                case 2:
                    vidahero -= secondatackenemy;
                    cout << "The atack destroys the hero with a pain of " << secondatackenemy << " his health is " << vidahero << endl;
                    break;
                case 3:
                    cout << "You surrender" << endl;
                    vidaenemy = 0;
                    break;
                default:
                    cout << "error";
                }
                turno = true;


            }
            if ((option == 2) && (turno == true)) {
                int atackhero = dis(ran);
                if (atackhero == 0) {
                    vidaenemy -= firstatack;
                    cout << "The atack destroys the enemy with a pain of " << firstatack << " his health is " << vidaenemy << endl;
                }
                if (atackhero == 1) {
                    vidaenemy -= secondatack;
                    cout << "The atack destroys the enemy with a pain of " << secondatack << " his health is " << vidaenemy << endl;
                }
                turno = false;
            }
            if ((vidaenemy <= 0) && (vidahero >= 1)) {
                cout << "The hero wins and  saved the village" << endl;
            }
            else if ((vidahero <= 0) && (vidaenemy >= 1)) {
                cout << "The enemy Wins and destroys the village" << endl;
            }
            else if ((vidaenemy <= 0) && (vidaenemy <= 0)) {
                cout << "Both are dead its a draw" << endl;
            }

        }

    }
    

    
    
}


int main()

{
 
    inicio();
    ataque(option);
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
