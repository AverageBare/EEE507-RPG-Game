/** Generic Mob AI Functions
* 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#include "AI.h"

/** Constructor 
* Default mob is nuetral.
*/
AI::AI(void)
{
	threat = 0;
}

/** Constructor
* Must have a Threat Level; 1 (Hostils) or 0 (Nuetral).
* 
* @param agro, Threat type of character
*/
AI::AI(const bool agro)
{
	// Set private value to initiating Agro level
	threat = agro;
}

/** Destrucor */
AI::~AI(void)
{
	Clear();
}


/** Clear Function 
* Set object memory to 0
*/
void AI::Clear(void)
{
	memset(this, 0, sizeof(this));
}

/** Retreave Threat level
* 
* @return Hostile (1) or Nuetral (0) threat type
*/
bool AI::GetThreat(void)
{
	// Output Threat
	std::cout << this->threat;

	return threat;
}

/** Set Threat level
* 
* @param Agro of this character
*/
void AI::SetThreat(bool agro)
{
	threat = agro;
}

/** Retreave Direction of this Character 
* 
* @todo enum directions?
* @return Direction of this character
*/
int AI::GetDirection(void)
{
	// Output direction
	std::cout << this-> direction;

	return direction;
}

/** Set character direction
* 
* @param Direction of this character
*/
void AI::SetDirection(int dir)
{
	direction = dir;
}


/** Generate a random direction
* If character is stationary too long
* assign a direction to walk in.
* 
* @todo include wall physics
* @param How long should character wait
* @return Random direction
*/
int AI::RandDir(int wait)
{
	// Create temp direction variable
	int dir;

	// Check if (PlayerXY() != Map.wall)
	//{
		dir = 0;
			
		Sleep(wait);//for wait duration

		dir = rand() % 4;
	//}
	//else 
	//{
		//while(dir = direction)
		//dir = rand() % 4;
	//}
return dir;
}

/** Update (virtual)
* Call all periodic functions
*/
void AI::Update(void)
{
	RandDir(3);
}
