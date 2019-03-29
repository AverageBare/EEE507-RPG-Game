#include <iostream>
#include "Person.h"
using namespace std;

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