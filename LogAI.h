#pragma once
#include <iostream>
#include "CharCreator.h"

class LogAI
{
	//Data
private:
	
	bool dead;

	// Constructors
public:
	LogAI(void);

	// Services
	bool isDead();
	int getDir();

	void Follow(Character & me, Character & toFollow);
	void Dialog(void);

};