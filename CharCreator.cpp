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
* Set randomiser seed, and set test statements,
* set
* 
* @param set test true or false
*/
CCreator::CCreator(bool test)
{
	randSeed = time(NULL);

	maxEnemies = 20;

	this->test = test;
}

/** Desctructor
* Cycle through all list items and clear them
* 
*/
CCreator::~CCreator(void)
{
	while (!Enemies.empty())
	{
		Enemies.pop_back();

		// Test statements
		if (test == true)
		{
			std::cout << "Enemy terminated!";
		}
	}
	//memset(this, NULL, sizeof(this));
}

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

	if (!AtMax())
	{
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
				if (test == true)
				{
					std::cout << Enemy.getPlayerName() << " is born\n";
				}
		}
	}
}

/** Kill Enemy
* Loop through the list and remove any
* Enemy with less than 1 health
* 
* @param Enemy in my update() loop
*/
void CCreator::KillEnemy(list<Character>::iterator & it)
{
	int eSize;
	int health;
	string name;

	eSize = Enemies.size();
	

	// Make sure list are same length: NOT NECESSARY, contained AI
	//if (eSize == AIs.size())
	//{
		// Create list iterators
		//list<Character>::iterator itC;
		//list<LogAI>::iterator itAI;

		//itC = Enemies.begin();
		//itAI = AIs.begin();

	health = (it)-> getHp();

	if (health < 1)
	{
		// Print death text
		name = (it)-> getPlayerName();
		std::cout << name << " died, horribly";

		// Remove from the memory
		Enemies.erase(it);
		//AIs.erase(itAI);
	}
	else if (test == true)
	{
		std::cout << "No-one is ready to die \n";
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
Character & CCreator::Closest(void)
{
	unsigned int loop;
	double myX, myY, dist, close, closeX, closeY, X, Y;
	string name;

	// Over-set closest
	closeX = 200;
	closeY = 200;

	myX = Player.getX();
	myY = Player.getY();

	Character target;

	// Multiple iterators for closest and 
	list<Character>::iterator it;
	list<Character>::iterator itClose;
	
	// Scan through list, and compare to current closest
	for (loop = 0; loop < Enemies.size(); loop++)
	{
		it = Enemies.begin();

		X = (it)-> getX();
		Y = (it)-> getY();

		// Calculate linear distance between current vs closest
		dist = abs(myX -X) + abs(myY - Y);
		close = abs(myX -closeX) + abs(myY - closeY);
		
		if (dist < close)
		{
			closeX = X;
			closeY = Y;

			itClose = Enemies.begin();
			advance(itClose, loop);

			// Test statements
			if (test)
			{
				name = (it)-> getPlayerName();

				std::cout << name << " is closest\n";
			}
		}

		it++;
	}

	return (*itClose);
}




/** Array of enemies to print to map
* 
* @todo fix abort, error befor loop finishes
* @return an array of characters
*/
Character & CCreator::EnemyArray(void)
{
	int loop;
	int size =  maxEnemies;
	Character characterPos[20+1];

	list<Character>::iterator it;
	it = Enemies.begin();

	// Save Player as row 1
	characterPos[0] = (*it);
	if (test == true) {std::cout << "1 "<< Player.getPlayerName()<< endl;}

	// Cycle through the list to save in array
	for (loop = 0; loop < size; loop++)
	{
		if (test == true)
		{
			std::cout << (loop+2) << " "<< (it)-> getPlayerName() << endl;
		}

		characterPos[loop+1] = (*it);

		it++;	
		
	}
std::cout << "Working?"; // Break point, does not cout
	return characterPos[21];
}

/** Cycling update functions
* 
* 
* @return if at the max
*/
void CCreator::UpdateEnemies(void)
{
	unsigned int loop;

	list<Character>::iterator it;
	it = Enemies.begin();

	for (loop = 0; loop > Enemies.size(); loop++)
	{
		Follow(it);
		KillEnemy(it);
		AttackPlayer(it);


		it++;
	}
}

/** Initialise the list
* First character to be deleted
* 
* 
*/
void CCreator::Initialise(void)
{
	list<Character>::iterator it;
	it = Enemies.begin();

	Enemies.push_back(Character & init)
}

/** Compare max enemies
* If there are as many enemies as is fair
* limit the max number
* 
* @return if at the max
*/
bool CCreator::AtMax(void)
{
	int tempMax;

	tempMax = Player.getLevel()*3;

	if (tempMax >= maxEnemies)
	{
		return true;
	}
	else {return false;}
}

/** In Range
* Check to see if anyone is in range
* 
* @return If there is an enemy near
*/
bool CCreator::InRange(list<Character>::iterator & it)
{
	int X, Y, enemyX, enemyY;
	bool inX, inY;

	// Collect player pos, for comparison
	X = Player.getX();
	Y = Player.getY();

		enemyX = (it)-> getX();
		enemyY = (it)-> getY();

		if (abs(X-enemyX) <= 1) inX = true;
		if (abs(Y- enemyY) <= 1) inY = true;

		if (inX && inY) // There is a player nearby
		{
			// Test statements
			if (test == true)
			{
				std::cout << (it)-> getPlayerName() << " is in range\n";
			}

			return true; 
		}

	// Test statements
	if (test) 
	{
		std::cout << "No-one is there\n";
	}
	return false; // There isn't
}

/** Follow
*   
*/
void CCreator::Follow(list<Character>::iterator & it)
{
	// Temporary variables
	double dist = 0;
	double distX = 0;
	double distY = 0;

	// Only works for positive values
	distX = (it)-> getX() - Player.getX();
	distY = (it)-> getY() - Player.getY();

	// Move in largest distance difference
	if (distX > distY)
	{
		if(Player.getX() > (it)-> getX())
		{(it)->setDir(RIGHT);}
		else if(Player.getX() < (it)-> getX())
		{(it)->setDir(LEFT);}
	}
	else if(distX < distY)
	{
		if((it)-> getY() > Player.getY())
		{(it)-> setDir(DOWN);}
		else if((it)-> getY() < Player.getY())
		{(it)-> setDir(UP);}
	}
else {(it)-> setDir(STOP);}
}

/** Attack Player
* Enemy character follows the player and if is in 
* range, it attacks the player character.
*
* @todo loop through list see if in range,  
*/
void CCreator::AttackPlayer(list<Character>::iterator & it)
{

	//Follow(Player);

	if (InRange(it))
	{
		// Call the Player that is attacked, and attacker
		Player.takeDamage(Player, (*it));
	}
}

/** Generate a name for characters/enemies
* List of enemy types, random selector
* 
* @return a name
*/
std::string CCreator::RandName(void)
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