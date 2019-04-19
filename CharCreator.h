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
	time_t randSeed;
	int maxEnemies;
	int enemyCap;
	
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

	Character & EnemyArray(void);

	// Misc Functions
	void UpdateEnemies(void);


	// Implementation
private:

	void Initialise(void);
	bool AtMax(void);
	bool InRange(list<Character>::iterator & it);
	void Move(list<Character>::iterator & it);
	void Follow(list<Character>::iterator & it);
	void AttackPlayer(list<Character>::iterator & it);
	std::string RandName(void);
};

