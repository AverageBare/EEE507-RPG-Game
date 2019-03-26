/** Base Class missions, quests, killstreaks
* 
* @todo Virtual Update function?
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#pragma once
//#include "item

class Objective
{
	// Data
private:

	bool complete;
	bool done;

	char title[80];
	int dificulty;
	int importance;
	bool reward;
	int XP;
	//item * loot

protected:

	// Services
	void IsComplete(void);
	void SetXP(int xp);

public:

	virtual bool Conditions(void);
	virtual void GiveReward(void);

	
	void SetName(char * newName);

	int GetDifficulty(void);
	int GetImportance(void);



	// Constructors & Destructor
	Objective(void);
	Objective(char * name, int * xp);
	virtual ~Objective(void);
};

