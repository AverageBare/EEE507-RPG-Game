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


/** 
	This is the map design code, used to create 
	a grey open box with internal obstacles within which the game will be played
*/

//Standard Includes.
#pragma once
#include <iostream>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>

//Custom Includes.
#include "Character.h"
#include "CharCreator.h"
using namespace std;

class TileMap 
{

// Private Data
private:
	bool game_over;

public:
	//Constructor & Destructor.
	TileMap();
	~TileMap();

	//Service Functions.
	bool TileMap::Print();
	void PlayerPlacer();


	HANDLE console_handle;	// handle for the console      
    COORD cur_cord;			// COORD struct to keep the coordinate
	CCreator Players();
	
	//Variables(Global)
	char Grid[100][100];
	int x;
	int y;
	int player; 
	int i;


};