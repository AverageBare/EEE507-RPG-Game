#include <iostream>
using namespace std;

const int height = 20;
const int width = 20;

bool gameOver;
int playerX, playerY, enemyX, enemyY, actorX, actorY, enemySlain;
int health, speed, defence, attack;

/*void characterAttributes;
{
	int health = 1;
	int speed = 1;
	int defence = 1;
	attack = 1;
	
	if (health <= 0)
		gameOver == True;

}
*/

void Draw()
{
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;



	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "0";
			if (i == playerY && j == playerX)
				cout << "X";
			else
				cout << " ";
			/* if (i == enemyY && j == playerX)
					cout << "X"
					These two to be updated when player X+Y work corectly
			if (i == NPCY && j == playerX)
					cout << "X" 
					*/
			
			if (j == width - 1)
				cout << "0";
			if (i == height - 1)
				cout << "0";
			
		}
		cout << endl;
	}

}

int main()
{
	while (!gameOver)
	{
		Draw();
		// characterAttributes();

	}
}