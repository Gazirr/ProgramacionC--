#include "Boss.h"
#include "iostream"
#include <iostream>
#include <random>
using namespace std;


//Constructores
Boss::Boss(const string& name, int hp, int damage, int pFinalAttack) : Character(name,hp,damage), finalAttack(finalAttack){}

//Getters & Setters
int Boss::getFinalAttack() const {
	return finalAttack;
}
void Boss::setFinalAttack(const int sd) {
	finalAttack = sd;
}

//Metodos Propios
int Boss::finalAttackBoss(Character& target, int &attaqueBoss) {
	int dmg = 0;
	attaqueBoss++;

	if (attaqueBoss <= 2) {
		dmg = rand() % 20;

	}
	if (attaqueBoss > 2) {
		dmg = 15 + rand() % 30;
		attaqueBoss = 0;
	}
	int vidaNueva = target.getHp() - dmg;
	target.setHp(vidaNueva);
	return dmg;
}