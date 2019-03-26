/**
* 
* 
* @todo Virtual Update function?
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#include "Objective.h"

Objective::Objective(void)
{
	complete = 0;
	done = 0;

	this->title = "New Objective";
	dificulty = 0;
	importance = 0;
	reward = 0;
	XP = 0;

}

Objective::Objective(char * name, int xp)
{
	complete = 0;
	done = 0;

	this->title = name;
	dificulty = 0;
	importance = 0;
	reward = 0;
	XP = xp;

}


Objective::~Objective(void)
{
}

/** Check if finished
* 
* 
* 
* @return If the Task is done (1) Yes, (0) No
*/
void Objective::IsComplete(void)
{
	if (!complete)
	{
		if (Conditions() == 1)
		{
			complete = 1;
		}
	}
	
}

/**
* 
* 
* @todo Virtual Update function?
*/
void Objective::SetXP(int xp)
{
	this-> XP = xp;
}

/** Condition checks
* 
* 
* 
* @todo todo
* @return Are the Conditions are met? (1) Yes, (0) No
*/
bool Objective::Conditions(void)
{
	int condition1;
	int condition2;

	if (condition1 && condition2 == 1)
	{
		IsComplete();
		return 1;
	}
	return 0;
}



/** Reward player
* 
* 
* 
* @return If the Task is done (1) Yes, (0) No
*/
void Objective::GiveReward(void)
{
	if (reward)
	{
		if (!done)
		{
			if (complete)
			{
				//Player.addXP(XP);
				//Inventory.freeInventorySlot(loot)
			}
		}
	}

}