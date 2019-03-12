/* AI for Hostile Mobs
Combat AI

Public
Member Functions: bool IsInRange(Player target)
				  bool Attack(Player target)
Member variables:

@author Jeremy Eastwood-Smith
@licence
@copywrite pending.
*/
#pragma once
#include "ai.h"

class Hostile :
	public AI
{
public:

	// Combat AI
	bool IsInRange(void);// Get characters pos, enemy weapon range and decide
	bool Attack(void);// Call Player TakeDamage()

	Hostile(void);
	~Hostile(void);
};

