#include "Character.h"
#include <iostream>
#include<string>
#include <random>
using namespace std;


Character::Character()
{
    name = "";
    hp = 0;
    damage = 0;
}

Character::Character(string pName, int pHp, int pDamage)
{
    this->name = pName;
    this->hp = pHp;
    this->damage = pDamage;

}

string Character::getName()
{
    return name;
}

int Character::getHp()
{
    return hp;
}

int Character::getDamage()
{
    return damage;
}

void Character::setName(string pName)
{
    name = pName;
}

void Character::setHp(int pHp)
{
    hp = pHp;
}

void Character::setDamage(int pDamage)
{
    damage = pDamage;
}

string Character::getStatus()
{
    return ("Character Status \n   Name: " + name + "\n" + "HP: " + to_string(hp) + " Damage: " + to_string(damage));
}
//Metodos Propios

int Character::ataque(Character &target) {
    int dmg = rand() % 20;
    int vidaNueva = target.getHp() - dmg;
    target.setHp(vidaNueva);
    return dmg;
}
