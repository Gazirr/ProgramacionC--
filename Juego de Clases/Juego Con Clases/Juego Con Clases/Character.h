#pragma once
#include <iostream>
using namespace std;
class Character
{
	//ATRIBUTOS
private:
	string name;
	int hp;
	int damage;

	//PROTOTIPOS
public:
	//CONSTRUCTORES
	Character();
	Character(string pName, int pHp, int pDamage);
	//GETERS
	string getName();
	int getHp();
	int getDamage();
	//SETTERS
	void setName(string pName);
	void setHp(int pHp);
	void setDamage(int pDamage);
	//METODOS PROPIOS
	string getStatus();
	int ataque(Character& target);
};

