#include <iostream>
#include "Person.h"
using namespace std;


Person::Person(void)
{
	X = 0;
	Y = 0;

	health = 10;
	speed = 1;
	def = 1;
	att = 1;
	dir = 0;
	level = 0;
	XP = 0;
	XPNext = 100;

	PersAI = new AI;
}


Person::~Person(void)
{
}



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

int Person::getLvl(void)
{

	return level;
}

void Person::setDir(int direction)
{
	this->dir = direction;

}

/*void move(void)
{
	//Call jordan func for keypress
	//if (Input.buttonpress())
	//{
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