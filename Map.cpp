#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
bool gameOver;
const int width = 60;
const int height = 20;

void Setup()
{
	gameOver = false;

}

void Draw()
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

int main()
{
	Setup();
	while (!gameOver)
	{
		Draw();
		Sleep(10);
	}
	return 0;
}