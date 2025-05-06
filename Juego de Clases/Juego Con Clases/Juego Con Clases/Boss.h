#pragma once
#include <string>
#include "Character.h"
class Boss : public Character{
	//Atributos
private:
	int finalAttack;
	//Prototipos
public:
	//Constructores
	Boss();
	Boss(const string& name, int hp, int damage, int pFinalAttack);
	//Getters
	int getFinalAttack() const;
	//Setters
	void setFinalAttack(int sd);
	//Metodos Propios
	int finalAttackBoss(Character& target, int &attaqueBoss);
};

