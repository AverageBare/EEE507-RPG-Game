/** List Character maintanence source file
* Create  lists to store multiple enemies with individual AI
* 
* 
* @todo 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/

#include "ChrCrea.h"

/** Constructor
* Empty
* 
*/
CCreator::CCreator(void)
{
	Character Player;
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
	/*while (!AIs.empty())
	{
		AIs.pop_back();
	}*/

};

/** Create Enemies 
* Add any number of enemies to the list and 
* give them a random name
* 
* @param number of enemies to create
*/
void CCreator::AddEnemies(int num)
{
	int loop;
	string name;

	for (loop = 0; loop < num; loop++)
	{
		name = RandName();

		// No longer creating seperate AI list
		//if (Enemies.size() > 0/*== AIs.size()*/)
		//{
			Character Enemy(name, true);
			//LogAI Hostile;

			// First letter of name
			Enemy.setSymb(name[0]);

			Enemies.push_back(Enemy);
			//AIs.push_back(Hostile);
		/*}
		else
		{
			std::cout << "List is empty";
		}*/
	}
}

/** Kill Enemy
* Loop through the list and remove any
* Enemy with less than 1 health
* 
*/
void CCreator::KillEnemy(void)
{
	int loop;
	int eSize;
	int health;
	string name;

	eSize = Enemies.size();
	

	// Make sure list are ame length: NOT NECESSARY
	//if (eSize == AIs.size())
	//{
		// Create list iterators
		list<Character>::iterator itC;
		//list<LogAI>::iterator itAI;

		itC = Enemies.begin();
		//itAI = AIs.begin();

		for (loop = 0; loop < eSize; loop++)
		{
			health = (itC)-> getHp();

			if (health < 1)
			{
				name = (itC)-> getname();
				std::cout << name << " died, horribly";

				Enemies.erase(itC);
				//AIs.erase(itAI);
			}
			itC++;
			//itAI++;
		}

	//}
	//else {std::cout << "CCreator list length error";}
	// Call setup() to refresh
}

/** Closest
* Find the closest enemy and output
* 
* @param Player reference
* @return Closest enemy to player
*/
Character & CCreator::Closest(Character & me)
{
	unsigned int loop;
	double myX, myY, dist, close, closeX, closeY, X, Y;

	closeX = 200;
	closeY = 200;

	myX = me.getX();
	myY = me.getY();

	Character target;

	list<Character>::iterator it;
	list<Character>::iterator itClose;
	

	for (loop = 0; loop < Enemies.size(); loop++)
	{

		X = (it)-> getX();
		Y = (it)-> getY();

		dist = abs(myX -X) + abs(myY - Y);
		close = abs(myX -closeX) + abs(myY - closeY);
		
		if (dist < close)
		{
			closeX = X;
			closeY = Y;

			itClose = Enemies.begin();
			advance(itClose, loop);
		}

		it++;
	}

	return (*itClose);
}


/** In Range
* Check to see if anyone is in range
* 
* @param Player
* @return The first enemy that is in range
*/
bool CCreator::inRange(Character & Player)
{
	int loop;
	int X, Y, enemyX, enemyY;
	bool inX, inY;

	X = Player.getX();
	Y = Player.getY();

	list<Character>::iterator it;

	it = Enemies.begin();

	for (loop = 0; loop < Enemies.size(); loop++)
	{
		enemyX = (it)-> getX();
		enemyY = (it)-> getY();

		if (abs(X-enemyX) <= 1) inX = true;
		if (abs(Y- enemyY) <= 1) inY = true;

		if (inX && inY)
		{
			return true;
		}
	}
}

/** Attack Player
* Enemy character follows the player and if is in 
* range, it attacks the player character.
*
* @todo loop through list see if in range,  
*/
void CCreator::AttackPlayer()
{
	int loop;

	Follow(Player);

	list<Character>::iterator it;

	it = Enemies.begin();
	for (loop = 0; loop < Enemies.size(); loop++)
	{
		if (inRange(Player))
		{
			Player.takeDamage();
		}
	}
}

void CCreator::DrawEnemy()
{
	unsigned int loop; 
	double X, Y;

	list<Character>::iterator toDraw;

	toDraw = Enemies.begin();

	for (loop = 0; loop < Enemies.size(); loop++)
	{
		X = (toDraw)-> getX();
		Y = (toDraw)-> getY();

		/*if (Map.isSpace(X, Y))
		{
			
		}*/

		toDraw++;
	}
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

//int main(void)
//{
//	CCreator Test;
//	return 0;
//}