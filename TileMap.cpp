//@author Theo De Groot
//@licence
//@copywrite pending.

/** This is the map design code, used to create 
a grey open box with internal obstacles within which the game will be played
*/

// TileMap.H contains my variables and functions
#include "TileMap.h"

void gotoxy(int x, int y)
{

	static HANDLE h = NULL;
	if(!h)
		h= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);

};

//Constructor for the TileMap Class
TileMap::TileMap()
{
		game_over = false;
	
};


bool game=true; // bool function to intialise the start of the game, for game = true




bool Print_Grid() //function to print Grid to screen, also includes placeholders for items or characters. 
{
	int x  = 1;
	int y  = 1;
	int x1 = 22;
	int y1 = 1;
	int x2 = 19;
	int y2 = 9;
	int x3 = 37;
	int y3 = 18;
	int player = 2;
	int Enemy1 = 4;
	int Enemy2 = 6;
	int Enemy3 = 5;
	int item1  = 0;
	char w=219;			//Color grey
	
// Design of Grid using "#" for walls and "." for the areas for players to walk. 
//Grid is 500 by 500 but actual size used is smaller to allow for alterations and expansion if required.
char Grid[500][500] = {
	
	"######################################################",
	"#....................................................#",
	"#..#######################..#######################..#",
	"#..#                     #..#                     #..#",
	"#..#######################..#######################..#",
	"#....................................................#",
	"#....................................................#",
	"#..####..####..########################..####..####..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..#  #..#  #..#                      #..#  #..#  #..#",
	"#..####..####..########################..####..####..#",
	"#....................................................#",
	"#....................................................#",
	"#..#######################..######################...#",
	"#..#                     #..#                    #...#",
	"#..#######################..######################...#",
	"#....................................................#",
	"######################################################",
	
	};

int i;
	while(game==true)
	{

		Sleep(100);
		system("cls");
		for (i=0;i<22;i++)
		{	
	
			cout<<Grid[i]<<endl;
			
		}


		for(int k=0;k<=22;k++)
		for(int j=0;j<=54;j++)
		{
			if(Grid[k][j]=='#')
				Grid[k][j]=219;
		}
		cout<<"Inventory";
		
		Grid[y][x]=player;
	}
	return (0);
}

int main()
{
	Print_Grid();
	cout << Print_Grid; 

	return (0);
}

