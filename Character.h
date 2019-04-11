#pragma once
#include <conio.h>
#include <sstream>
#include <vector>
#include <iostream>
//#include "LogAI.h"

// J
#define STOP 0
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

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
	// J
	int getDir();

	//Additional functions
	void resetStat(const std::string name);
	std::string getAsString() const;
	void levelUp();

	void createNewCharacter();// Create these Asap
	void createNewEnemy();

	// J
	void setSymb(char symbol); // CCreator.addEnemies(int) ->  G, R, B or Z  
	void setDir(int newDir);
	void takeDamage(Character & me, Character & attacking);// parse in weapon for damage modifier


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
	char symbol; // on map
	bool threat;
	int direction;
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