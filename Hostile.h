/* AI for Hostile Mobs
Combat AI

Public
Member Functions: bool AttackPlayer(Player target)
				  void Target(Player target)
Member variables:

@author Jeremy Eastwood-Smith
@licence
@copywrite pending.
*/
#pragma once
#include "AI.h"

class Hostile :
	public AI
{
private:

	// Member Functions
	bool IsInRange(void);// Get (Target player) pos, enemy weapon range and decide
	double DistanceFrom(void);// Calculate distance from (Target player)

public:

	// Combat AI
	bool AttackPlayer(void);// Call (target Player) TakeDamage()
	void Target(void); // Decide Target for attack using health and distance (NumOfCharacters)

	// Services
	void Update(void);


	// Constructor and Destructor
	Hostile(void);
	~Hostile(void);
};

