#include "Hostile.h"


Hostile::Hostile(void)
{
	threat = 1;
	direction = 0;
}


Hostile::~Hostile(void)
{
	Clear();
}

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
	
}

bool Hostile::AttackPlayer(void) // Pass in Player for attack call
{	
	// Make the target player take damage
	//if (IsInRange())
	//{
		//Player.TakeDamage();

	//return 1; // Success
	//}
	//else return 0;
}

// Score enemies based on distance (& health,  and armour/level)
void Hostile::Target(void)// (NumOfCharacters) on the map
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

void Hostile::Update(void)
{
	AI::Update();
	Target();
}
