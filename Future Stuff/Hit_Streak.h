/**
* 
* 
* @todo Virtual Update function?
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#pragma once
#include "objective.h"

class Hit_Streak :
	public Objective
{
public:
	Hit_Streak(void);
	Hit_Streak(char * name, int xp);
	~Hit_Streak(void);
};

