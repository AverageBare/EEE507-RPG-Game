#pragma once
/** List Character maintanence
* Create  lists to store multiple enemies with individual AI
* 
* Public functions:
* 
* 
* @todo 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/


// Standard includes
#include <list>
#include <string>
#include <time.h>

// Custom includes
//#include "LogAI.h"
#include "Character.h"


class CCreator
{
	// Data 
private:

	bool test;
	bool inited;
	int maxEnemies;
	int curPlayers;
	
	// Character creation
	Character Player;
	std::list<Character> Enemies;
	Character init;
	// Only usefull if Hostile and Nuetral are same class
	//std::list<LogAI> AIs; 

	// Constructor & destructor
public:

	CCreator(bool test);
	~CCreator(void);

	// Enemy Services
	void AddEnemies(int num);
	void KillEnemy(list<Character>::iterator & it);
	Character & Closest(void);
	bool MunchPlayer(void);

	Character * EnemyArray(void);
	int ArraySize(void);

	// Misc Functions
	void AttackEnemy(int weapRange, int damage);
	int NumPlayers(void);
	void UpdateEnemies(void);


	// Implementation
private:

	void Initialise(string name);
	bool AtMax(int added);
	bool InRange(list<Character>::iterator & it);
	bool InRange(list<Character>::iterator & it, int wRange); // overloaded for Weapon Range
	void Follow(list<Character>::iterator & it);
	void AttackPlayer(list<Character>::iterator & it);
	std::string RandName(void);
};