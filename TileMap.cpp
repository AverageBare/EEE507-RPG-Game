#include "TileMap.h"

//@author Theo De Groot
//@licence
//@copywrite pending.

/** This is the map design code, used to create 
a 60x20 open box within which the game will be played
*/

void gotoxy(int x, int y)
{

	static HANDLE h = NULL;
	if(!h)
		h= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);

};

Map::Map()
{
		game_over = false;
	
};


bool game=true;
int main()
{

a:
	int x=1;
	int y=1;
	int x1=22;
	int y1=1;
	int x2=19;
	int y2=9;
	int x3=37;
	int y3=18;
	int player=2;
	char w=219;

char Grid[500][500] = {
	
		"###########################################",
		"#  ......................................##",
		"#  ......................................##",
		"#..######## ######## ######## ######## ..##",
		"#..#      #.#      #.#      #.#      #...##",
		"#..#      #.#      #.#      #.#      #...##",
		"#...#    #...#    #...#    #...#    #....##",
		"#....####.....####.....####.....####.....##",
		"#........................................##",
		"#........................................##",
		"#....###......###......###......###......##",
		"#...#   #....#   #....#   #....#   #.....##",
		"#..#     #..#     #..#     #..#     #....##",
		"# .#     #.#      #.#      #.#       #...##",
		"# .####### ######## ######## ######### ..##",
		"#........................................##",
		"###########################################",
	
	};

int i;
	while(game==true)
	{

		Sleep(100);
		system("cls");
		for (i=0;i<20;i++)
		{	
	
			cout<<Grid[i]<<endl;
			
		}


		for(int k=0;k<=19;k++)
		for(int j=0;j<=42;j++)
		{
			if(Grid[k][j]=='#')
				Grid[k][j]=219;
		}
		cout<<"Cunt";
		Grid[y][x]=player;
	}
	return (0);
}

