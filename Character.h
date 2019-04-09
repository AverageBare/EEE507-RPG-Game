#pragma once
#include <conio.h>
#include <sstream>
#include <vector>
#include <iostream>
#include "LogAI.h"

using namespace std;
//CREATE DAMAGE FUNCTION

class Character
{
public:
	Character();
	Character(const std::string name, bool agro); // J, overloaded constructor
	virtual ~Character();

	//Functions for getting stats
	double getX();
	double getY();
	string getname();
	int getLevel();
	int getXp();
	int getXpNext();
	int getHp();
	int getHpMax();
	int getAtt();
	int getDef();
	int getSpeed();
	int getStatPoints();
	

	//Additional functions
	void resetStat(const std::string name);
	std::string getAsString() const;
	void levelUp();

	void createNewCharacter();// Create these Asap
	void createNewEnemy();


private:
	double X;
	double Y;

	std::string Character::name;
	//char name;
	int level;
	int xp;
	int xpNext;
	int hp;
	int hpMax;
	int att;
	int def;
	int speed;
	int statPoints;

	// Jeremy
	bool threat;
};



/*public:
	double getX();
	double getY();
	int getHealth();
	int getSpeed();
	int getDef();
	int getAtt();
	Character(std::string name);
	virtual ~Character();
	const std::string toString();
};*/



/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	//enum eDirection { Up, Down, Left, Right, Stop = 0};
	//eDirection dir;
	//void move(enum dir);
	//bool threat;
	*/