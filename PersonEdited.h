#pragma once
#include <conio.h>
#include "AI.h"

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

	enum eDirection { Up, Down, Left, Right, Stop = 0};
};

/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	
	//eDirection dir;
	//void move(enum dir);
	//
	*/