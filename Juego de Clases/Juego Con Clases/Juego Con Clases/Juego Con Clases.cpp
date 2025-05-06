// Juego Con Clases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Character.h"
#include "Hero.h"
#include "Boss.h"
#include <random>
using  namespace std;
int main() {

	Character enemy("Asesino", 100, 0);
	Hero hero("Lucifer", 150, 0, 0);
	Boss boss("Dios", 120, 0, 0);
	cout << "--------------------------" << " \n";
	cout << "|" << enemy.getStatus() << "|" << "\n";
	cout << "--------------------------" "\n";
	cout << "|" << hero.getStatus() << "|" << "\n";
	cout << "--------------------------" << "\n";
	cout << "|" << boss.getStatus() << "|" << "\n";
	cout << "--------------------------" << "\n";
	int attackTime = 0;
	cout << "Es Hora de pelear hoy se enfrenta " << hero.getName() << " y " << enemy.getName() <<  "\n";
	while (hero.getHp() > 0 && enemy.getHp() > 0) {

		//Turno Hero
		cout << enemy.getName() << " " << enemy.getHp() << " / " << hero.getName() << " " << hero.getHp() << "\n";
		cout << "choose attack" << endl;
		cout << "1.- Seduccion" << endl;
		cout << "2.- Poder divino" << endl;
		int choice;
		cin >> choice;


		hero.attack(enemy, choice, attackTime);
		//Turno Enemigo
		enemy.ataque(hero);


		//Validar si la vida del enemy esta a 0
		if (enemy.getHp() <= 0) {
			cout << enemy.getName() << " Ha sido derrotado ahora debes enfrentarte a dios" << "\n";

		}
		if (hero.getHp() <= 0) {
			cout << hero.getName() << " ha sido derrotado se acabo el juego";
			break;
		}


	}
	cout << "Es hora de Pelear hoy se enfrenta " << hero.getName() << " y " << boss.getName() << "\n";
	int attaqueBoss = 0;
	while (hero.getHp() > 0 && boss.getHp() > 0) {
		// Turno Hero
		cout << boss.getName() << " " << boss.getHp() << " / " << hero.getName() << " " << hero.getHp() << "\n";
		cout << "choose attack" << endl;
		cout << "1.- Seduccion" << endl;
		cout << "2.- Poder divino" << endl;
		int ataque;
		cin >> ataque;

		hero.attack(boss, ataque, attackTime);

		// Turno Boss
		boss.finalAttackBoss(hero, attaqueBoss);


		if (boss.getHp() <= 0) {
			cout << hero.getName() << "Ha derrotado a " << boss.getName();
		}
		if (hero.getHp() <= 0) {
			cout << boss.getHp() << " ha derrotado a " << hero.getHp();
		}
	}
	
}


