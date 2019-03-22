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
#include <iostream>
#include <windows.h>

class AI
{
	// Data
private:

	bool threat;
	int direction;

	
// Services
public:

	bool GetThreat(void);
	void SetThreat(bool agro);
	int GetDirection(void);
	void SetDirection(int dir);
	
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
	AI(const bool agro);
	~AI(void);
};

