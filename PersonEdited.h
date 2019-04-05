#pragma once
#include <conio.h>
#include "AI.h"

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
#define STOP 0

class Person
{
private:
	int health, speed, def, att, dir, level;
	unsigned int XP, XPNext;
	bool threat;
	double X, Y;

public:
	Person(void);
	~Person(void);

	double getX();
	double getY();
	int getHealth();
	int getSpeed();
	int getDef();
	int getAtt();
	int getLvl();

	void setDir(int direction);

};

/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	
	//eDirection dir;
	//void move(enum dir);
	//
	*/
