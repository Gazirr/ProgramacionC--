#pragma once
#include <string>
#include "Character.h"
using namespace std;
class Hero : public Character {
	//Atributos
private:
	int secondAttack;
	//Prototipos
public:

	//Constructores
	Hero();
	Hero(const string& name ,int hp,int damage, int pSecondAttack);
	//Getters
	 int getSecondAttack() const;
	//Setters 
	void setSecondAttack(int sd);
	//Metodos Propios
	int attack(Character& target, int attackType, int &attackTime);
};


