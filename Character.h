#pragma once
#include <conio.h>

class Person
{
private:
	int health, speed, def, att;
	double X, Y;
	

public:
	double getX();
	double getY();
	int getHealth();
	int getSpeed();
	int getDef();
	int getAtt();
};

/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	//enum eDirection { Up, Down, Left, Right, Stop = 0};
	//eDirection dir;

	//void move(enum dir);

	//bool threat;
	*/
