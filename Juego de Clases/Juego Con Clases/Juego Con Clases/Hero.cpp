#include "Hero.h"
#include "iostream"
#include<string>
using namespace std;


	//CONSTRUCTORES
Hero::Hero(const string& name, int hp, int damage, int pSecondAttack) : Character(name,hp,damage), secondAttack(secondAttack){}

//Getters & Setters
int Hero::getSecondAttack() const {
	return secondAttack;
}
void Hero::setSecondAttack(const int sd) {
	secondAttack = sd;
}
// Metodos Propios
int Hero::attack(Character& target, int attackType, int &attackTime) {
    int dmG= 0;
     attackTime++;
    if (attackType == 1) {
        dmG = 20;

    }
    if (attackType == 2 && attackTime >= 3) {
        dmG = 30;
        attackTime = 0;
    }
    else {
        dmG = 20;
    }
    if (attackType > 2) {
        dmG = 0;
    }
    int vidaNueva = target.getHp() - dmG;
    target.setHp(vidaNueva);
    return dmG;
}