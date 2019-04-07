#include <iostream>
#include "Character.h"
using namespace std;



Character::Character(std::string name)
{
	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = 10;
	this->hp = 10;
	this->maxHp = 10;

	this->att = 1;
	this->def = 1;
	this->speed = 1;

	//Attributes+core at beginning
}

Character::~Character()
{

}
const std::string Character::toString()
{


	//The below will all be printed to display their values at
	//the current time
	//Player attributes followed by aux features
	std::stringstream ss;
	ss << "Name = " << this->name << "\n"
		<< "HP = " << this->hp " / " << this->maxHP << "\n"
		<< "Att = " << this->att << "\n"
		<< "Def = " << this->def << "\n"
		<< "Speed = " << this->speed << "\n"
		<< "\n"
		<< "Level =" << this->level << "\n"
		<< "Exp = " << this->xp << "\n"
		<< "Exp to next = " << this->xpNext << "\n"
		<< "\n";

	return ss.str();

}

};

double Person::getX()
{
	return X;
}

double Person::getY()
{
	return Y;
}

int Person::getAtt()
{
	return att;
}

int Person::getDef()
{
	return def;
}

int Person::getHealth()
{
	return health;
}

int Person::getSpeed()
{
	return speed;
}

void move(void)
{
	
	if (Input.buttonpress())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;

		case 'd':
			dir = RIGHT;
			break;

		case 's':
			dir = DOWN;
			break;

		case 'w':
			dir = UP;
			break;
		}
}


/*
void useWeap(void)
{
	//if (Input.buttonpress())
	//{
			switch (_getch())
				case ' ':
				//swing weapon adjacently
			if dir == LEFT;
			set weaponX == X-1;
			set weaponY == Y;

			if dir == RIGHT;
			set weaponX == X+1;
			set weaponY == Y;

			if dir == UP;
			set weaponX == X;
			set weaponY == Y+1;

			if dir == DOWN;
			set weaponX == X;
			set weaponY == Y-1;

			if case !' ':
			set weaponX == 0;
			set weaponY == 0;

}

void enemyCollision(void)
{
	if getX ==


	//}
*/

void Damage()
{
	if (playerX == enemyX && playerY == enemyY)
		health - 1

}
