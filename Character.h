#pragma once
#include <conio.h>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
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
	void namePlayer();

	//Functions for getting stats
	int getX();
	int getY();
	string getPlayerName();
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
	void levelUp();
	void resetAggro(const std::string name);
	void Character::printStats() const;
	void createNewCharacter();// Create these Asap
	void createNewEnemy();
	char Character::getPlayerIcon(string str);
	// J
	void setSymb(char symbol); // CCreator.addEnemies(int) ->  G, R, B or Z  
	void setDir(int newDir);
	void takeDamage(Character & me, Character & attacking);// parse in weapon for damage modifier


private:
	int X;
	int Y;

	string playerName;
	int level;
	int xp;
	int xpNext;
	int hp;
	int hpMax;
	int att;
	int def;
	int speed;
	int statPoints;
	const char * playerIcon;

	// Jeremy
	char symbol; // on map
	bool threat;
	int direction;
};





/*int pressedKeys();
	void setHealth(int newHP);
	 use newHP value to change pointed to value of health
	//enum eDirection { Up, Down, Left, Right, Stop = 0};
	//eDirection dir;
	//void move(enum dir);
	//bool threat;
	*/


