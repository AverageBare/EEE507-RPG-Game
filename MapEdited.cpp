//@author Theo De Groot
//@licence
//@copywrite pending.

#include "Map.h"

/** This is the map design code, used to create 
a 60x20 open box within which the game will be played
*/
Map::Map()
{
	width = 60;
	height = 20;
	game_over = false;
	
}

Map::~Map(void)
{
	Enemies.clear();
}


/** This function creates the Map by inputting a 
hastag in the allocated spaces (The 60x20 grid)
*/
void Map::draw()
{
	bool walkSwitch = true;

	system("cls"); //system clearing the window
	for (int i = 0; i < width +1; i++)
		cout << "#";
	cout << endl;
	

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			else
				cout << " ";
			if (j == width - 1)
				cout << "#";

			if(Enemy.getX() == j && Enemy.getY() == i)
			{
				switch(walkSwitch)
				{
					case true:
						std::cout << "x";
						walkSwitch = false;
						break;
					case false:
						std::cout << "X";
						walkSwitch = true;
						break;
				}
			}
		}
		cout << endl;
	}

	for (int i = 0; i < width +1; i++)
		cout << "#";
	cout << endl;
}

/** Bool function to check if game over
if not then execute draw function to create Map*/
bool Map::CheckIfGameOver()
{
	//Setup();
	while (!game_over)
	{
		draw();
		Sleep(10);
	}
	return 0;
}

void Map::AddEnemy(Person & Player)
{
	if (!Enemies(0)) 
	
	Enemies.assign(Enemies.size(), Person & toAdd

}
void Map::DeleteEnemy(Person & toRemove)
{

}

int main(void)
{
	Map test;
	Person Player, Enemy;

	test.CheckIfGameOver();

	return 0;
}