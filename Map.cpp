//@author Theo De Groot
//@licence
//@copywrite pending.

#include "Map.h"

Map::Map()
{
	width = 60;
	height = 20;
	game_over = false;
	
}


/** This function creates the Map
*/
void Map::draw()
{
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
		}
		cout << endl;
	}

	for (int i = 0; i < width +1; i++)
		cout << "#";
	cout << endl;
}

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
