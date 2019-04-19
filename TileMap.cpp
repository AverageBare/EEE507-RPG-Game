/** 
	This is the map design code, used to create 
	a grey open box with internal obstacles within which the game will be played

	
	@author Theo De Groot B00693240 <De_Groot-T@ulster.ac.uk>
	@licence <https://github.com/AverageBare/EEE507-RPG-Game/blob/master/MIT%20Copyright%20License>
	MIT License

	Copyright (c) [2019] [If(!Broken{don'tFixIt();}]

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

#include "TileMap.h"

/**
	Sets the cursor on the compile screen to the location X, Y 
*/
void gotoxy(int x, int y)
{

	static HANDLE h = NULL;
	if(!h)
		h= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);

};

/**
	Constructor for the TileMap Class
*/
TileMap::TileMap()
{
	game_over=true;
	console_handle=GetStdHandle( STD_OUTPUT_HANDLE );  // getting console handle
	
};

/** 
	Destructor
*/
TileMap::~TileMap()
{
	game_over = false;
}

/** 
	bool function to intialise the start of the game, for game = true.
*/
bool game=true;


/**
	function to print Grid to screen. 
	Design of Grid using "#" for walls and " " for the areas for players to walk. 
*/
bool TileMap::Print() 
{
	int player = 2;
	int x = 1;
	int y = 1;
	// Temporary Grid to print onto the Grid specified in the class 
	char temp_grid[100][100] = {
	
	"######################################################",
	"#                                                    #",
	"#  ######################    ######################  #",
	"#  #                    #    #                    #  #",
	"#  ######################    ######################  #",
	"#                                                    #",
	"#                                                    #",
	"#  ####      ###########      ###########      ####  #",
	"#  #  #      #     #####      #####     #      #  #  #",
	"#  #  #      #     #              #     #      #  #  #",
	"#  #  #      #     #              #     #      #  #  #",
	"#  #  #      #     #              #     #      #  #  #",
	"#  #  #      #     #              #     #      #  #  #",
	"#  #  #      #     #####      #####     #      #  #  #",
	"#  ####      ###########      ###########      ####  #",
	"#                                                    #",
	"#                                                    #",
	"#  ######################    #####################   #",
	"#  #                    #    #                   #   #",
	"#  ######################    #####################   #",
	"#                                                    #",
	"######################################################",
	
	};

	// Copy the temp grid into the object Grid
	// Replace # symbols with white blocks
	for(int k=0;k<=22;k++)
	{
		for(int j=0;j<=54;j++)
		{
			// If it's a # make it a white block
			if(temp_grid[k][j]=='#') Grid[k][j]=219;
			// otherwise, just whatever it was in the temp grid
			else Grid[k][j] = temp_grid[k][j];
		}
	}


	while(game==true)
	{
		Sleep(100);
		system("cls");

		// Paint the grid from the object
		for(int i=0; i<=22; i++)
		{
			for(int j=0; j <=54; j++)
			{
				cout << Grid[i][j];
			}
			cout << endl;
		}
	/** 
		While the game is true the 'For loop' checks for all values of I and J that are
		"#" and replaces that symbol with a white square
	*/
		cout<<"Inventory";
		
		Grid[y][x] = player; 
	}
	return (0);
}
/**
	This gets the information from the CCreator array to be printed on the Map screen
*/
//void TileMap::PlayerPlacer()
//{
//	int size;
//	char EnemyGrid[100][100];
//	size = Players.NumPlayers();
//
//	//Pointer to the array of "Enemy" Characters
//	Character * enemies = Players.EnemyArray();
//	int loop;
//	for(loop=0; loop < size; loop++);
//	{
//		cout << enemies[loop].getIcon() << endl;
//	};
//}
