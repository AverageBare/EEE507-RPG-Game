/** Hostile Mob AI Functions
* 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#include "Hostile.h"


// Condtructor to initialise

Hostile::Hostile(void)
{
	AI::SetThreat(1);
	AI::SetDirection(0);
}


Hostile::~Hostile(void)
{
	Clear();
}

/** 
* @return True (1) or False (0) 
*/
bool IsInRange(void)
{
	// GetPlayerPos
	// Get this-> pos
	// GetWeaponRange
	//
	//if (PlayerPos - this-> pos < 1)// < GetWeaponRange())
	//{
		//return 1
	//}
	//else return 0;
	return 0;
}

/** Attacking
* Check if this character is in range of Target and attack
* 
* @todo Parameters/implement
* @param Player to attack
* @return if attacking; yes (1) or no (0)
*/
bool Hostile::AttackPlayer(void)
{	
	// Make the target player take damage
	//if (IsInRange())
	//{
		//Player.TakeDamage();

	//return 1; // Success
	//}
	//else return 0;
	return 0;
}

/** Targeting AI
* Score enemies based on distance from this character
* (& health,  and armour/level)
* 
* @todo implement code using Character class, add other variables
* @param Number of characters on map
*/
void Hostile::Target(void)
{
	//int loop;
	//int scores[NumOfCharacters];
	//int target = 0;
	//double dist;

	//dist = this -> Pos - TargetPos;

	// Pointer to enemy


	//for (loop = 0; loop < NumOfCharacters; loop++)
	//{
		//if (threat)
		//{
			//switch(dist) {
				//case <= 1:
					//scores[loop] = 10;
					//target = loop;
					//break
				//case <= 3:
					//scores[loop] = 9;
					//target = loop;
					//break
				//etc
		//}
		//else scores[loop] = 0; 

		// Find the highest score
		//if (scores[target] < scores[loop])
		//{
			//target = loop;
		//}
	//}

	//if(IsInRange(target)) 
	//{
		// Move in largest distance difference
	//}
	//AttackPlayer();
}

/** Update Hostile Mob
* Call base class Update function, and update
* Targeting AI.
* 
* @todo better if virtual?
*/
void Hostile::Update(void)
{
	AI::Update();
	Target();
}
