//@author Theo De Groot
//@licence
//@copywrite pending.

/** This is the map design code, used to create 
a grey open box with internal obstacles within which the game will be played
*/

#pragma once

#include <iostream>

#include <conio.h> 
//enables compilers to provide console input/output.

#include <Windows.h> 
//contains declarations for all of the functions in the Windows API,
//all the common macros used by Windows programmers, 
//and all the data types used by the various functions and subsystems.
#include "Inventory.h"
#include "Item.h"

using namespace std;

class TileMap 
{

private:
	bool game_over;
	bool Print_Grid(char Grid);
	char Grid[500][500];
	

public:
	TileMap();
	 
};