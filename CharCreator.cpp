/** List Character maintanence source file
* Create  lists to store multiple enemies with individual AI
* 
* 
* @todo 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#include "CharCreator.h"

/** Constructor
* Empty
* 
*/
CCreator::CCreator(void)
{
	
}

/** Desctructor
* Cycle through all list items and clear them
* 
* @param agro, Threat type of character
*/
CCreator::~CCreator(void)
{

	while (!Enemies.empty())
	{
		Enemies.pop_back();
	}
	while (!AIs.empty())
	{
		AIs.pop_back();
	}

};



void CCreator::AddEnemies(int num)
{
	int loop;
	for (loop = 0; loop < num; loop++)
	{
		string name;
		name = RandName();

		if (Enemies.size() == AIs.size())
		{
			Character Enemy(name, true);
			LogAI Hostile;

			Enemies.push_back(Enemy);
			AIs.push_back(Hostile);
		}
		else
		{
			std::cout << "Character and AI lists are uneaqual";
		}
	}
}

void CCreator::KillEnemy(void)
{
	int loop;
	int eSize;
	int health;
	string name;

	eSize = Enemies.size();
	

	// Make sure list are ame length 
	if (eSize == AIs.size())
	{
		// Create list iterators
		list<Character>::iterator itC;
		list<LogAI>::iterator itAI;

		itC = Enemies.begin();
		itAI = AIs.begin();

		for (loop = 0; loop < eSize; loop++)
		{
			health = (itC)-> getHp();

			if (health < 1)
			{
				name = (itC)-> getname();
				std::cout << name << " died, horribly";

				Enemies.erase(itC);
				AIs.erase(itAI);
			}
			itC++;
			itAI++;
		}

	}
	else {std::cout << "CCreator list length error";}
	// Call setup() to refresh
}

string CCreator::RandName()
{
	int type;

	type = rand() % 10;

	switch (type)
	{
	case 1:
		return "Goblin ";
		break;

	case 2:
		return "Rat ";
		break;

	case 3:
		return "Bureaucrat ";
		break;

	default: 
		return "Zombie ";
	}

}