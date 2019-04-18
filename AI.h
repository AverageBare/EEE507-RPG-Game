/** Generic AI for NPC and Enemies
* Must Specify Threat level as binary, could be scalable depending 
* on enemy, aggroRadius?
* Public
* Member Functions:
* Member variables:
* 
* @todo Virtual Update function?
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#pragma once
#include "Common includes.h"
#include "Person.h"
#include <windows.h>

class AI
{
	// Data
private:

	bool DEAD;
	bool threat;
	int direction;


// Services
public:

	bool GetDead(void);
	bool GetThreat(void);
	void SetThreat(bool agro);
	int GetDirection(void);
	void SetDirection(int dir);
	void Follow(Person & ME, Person & toFind); // (Player toFollow)

	void Die(Person & toDie);
	
//Implementation
protected:

	void Update(void); // Make virtual? currently easier to call internaly
	int RandDir(int wait); 
	void Clear(void);


	// enumerations for directions
	enum directions {Up, Down, Left, Right, Stop}; 

public:
// Constructors and Destructor
	AI(void);
	AI(Person & agro);
	~AI(void);
};

