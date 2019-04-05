/** AI for Hostile Mobs
* Combat AI, decide targets based on metrics (distance)of Players
* 
* Public
* Member Functions: bool AttackPlayer(Player target)
*				    void Target(Player target)
* Member variables:
* 
* 
* @todo: Need service functions!! 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/
#pragma once // If supported by everyones compliler
#include "AI.h"

class Hostile :
	public AI
{
	// Data
private:
	
	//Player * target; // hold a player as a target
	

public:

	// Combat AI
	bool AttackPlayer(void);// Call (target Player) TakeDamage()
	void Target(void); // Decide Target for attack using health and distance (NumOfCharacters) RETURN Player

	// Services
	void Update(void); // Virtual overide?

	//Implementation
private:

	bool IsInRange(void);// Get (Target player) pos, enemy weapon range and decide
	double DistanceFrom(void);// Calculate distance from (Target player)

	

	// Constructor and Destructor
	Hostile(void);
	~Hostile(void);

	
};

