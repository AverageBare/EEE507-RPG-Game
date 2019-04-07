#pragma once
#include <conio.h>
#include <sstream>
#include <vector>
#include <iostream>

class Person
{
private:
	//core features
	int hp;
	int maxHp;
	int level;
	int xp;
	int xpNext;
	double X, Y;



	//attributes
	int speed; //movespeed modifier
	int def; //Reduction of hp loss
	int att; //Modifier for Damage dealt per attack




public:
	double getX();
	double getY();
	int getHealth();
	int getSpeed();
	int getDef();
	int getAtt();

	Character(std::string name);
	virtual ~Character();

	const std::string toString();
};



/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	//enum eDirection { Up, Down, Left, Right, Stop = 0};
	//eDirection dir;

	//void move(enum dir);

	//bool threat;
	*/
