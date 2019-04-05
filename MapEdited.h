#pragma once
#include "Common includes.h"
#include <list>

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
	~Map();

	void draw();
	void Setup();
	bool CheckIfGameOver();

	// listing enemies
	list<Person> Enemies;// remember to destroy
	list<Person>::iterator it1; // points to position in list, initialise once added
	void AddEnemy(Person & toAdd);
	void DeleteEnemy(Person & toRemove);

};