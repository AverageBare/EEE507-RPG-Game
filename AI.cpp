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
	DEAD = false;
	threat = 0;
}

/** Constructor
* Must have a Threat Level; 1 (Hostils) or 0 (Nuetral).
* 
* @param agro, Threat type of character
*/
AI::AI(Person & agro)
{
	DEAD = false;
	// Set private value to initiating Agro level
	threat = agro.threat;
}

/** Destrucor */
AI::~AI(void)
{
	Clear();
}

bool AI::GetDead(void)
{
	return this->DEAD;
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
* @param Direction of this character / enum
*/
void AI::SetDirection(int dir)
{
	direction = dir;
}

/** Follow passed Player/Character
* Move in largest distance first/ figure out diagonal moves?
* 
* @param Character to follow
*/
void AI::Follow(Person & Me, Person & toFollow)
{
	// Temporary variables
	double dist = 0;
	double distX = 0;
	double distY = 0;

	// Only works for positive values
	distX = toFollow.getX() - Me.getX();
	distY = toFollow.getY() - Me.getY();

	// Move in largest distance difference
	if (distX > distY)
	{
		if(Me.getX() > toFollow.getX())
		{Me.setDir(LEFT);}
		else if(Me.getX() < toFollow.getX())
		{Me.setDir(RIGHT);}
	}
	else if(distX < distY)
	{
		if(Me.getY() > toFollow.getY())
		{Me.setDir(DOWN);}
		else if(Me.getY() < toFollow.getY())
		{Me.setDir(UP);}
	}
	else {setDir(0);}

}

/** Update (virtual)
* Call all periodic functions
*/
void AI::Update(void)
{
	RandDir(30);
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

void AI::Die(Person & toDie, Person & Killer)
{
	if (toDie.getHealth() < 0)
	{
		this-> DEAD = true;
		killer.xp
		toDie.~Person;
	}

}



