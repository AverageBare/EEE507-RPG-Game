#include <iostream>

#include <conio.h> 
//enables compilers to provide console input/output.

#include <Windows.h> 
//contains declarations for all of the functions in the Windows API,
//all the common macros used by Windows programmers, 
//and all the data types used by the various functions and subsystems.

using namespace std;

class Map 
{

private:
	int width;
	int height;
	bool game_over;

public:
	Map();
	void draw();
	void Setup();
	bool CheckIfGameOver();

};