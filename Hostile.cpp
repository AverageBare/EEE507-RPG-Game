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
* Score enemies based on distance from this hostile
* (& health,  and armour/level)
* Move Hostile in direction of highest scoring character
* 
* @todo implement code using Character class, add other variables
* @param Number of characters on map
*/
void Hostile::Target(void)
{
	//int loop;
	//int scores[NumOfCharacters]; // Milti dimensional array to hold x and y distances or just highest
	//int target = 0;
	//double dist; 

	//distx = this -> Pos.x - TargetPos.x;
	//disty  = this -> Pos.y - TargetPos.y;
	//dist = sqrt(distx^2 + disty^2);

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
		//if(distx > 0 && distx > disty) {directions = Left};
		//else if(distx < 0 && distx > disty) {directions = Right}; 
		//else if(disty > 0 && disty > distx) {directions = Down};
		//else if(disty < 0 && disty > distx) {firections = Up};
		//else directions = Stop;
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
