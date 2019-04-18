#include "LogAI.h"

LogAI::LogAI(void)
{
	this-> dead = false;
	std::cout << "I'm alive \n";
}

bool LogAI::isDead(void)
{
	
	std::cout << "No, I'm fine";
	return dead;
}

/** Follow passed Player/Character
* Move in largest distance first/ figure out diagonal moves?
* 
* @param Character to follow
*/
void LogAI::Follow(Character & Me, Character & toFollow)
{
	// Temporary variables
	double dist = 0;
	double distX = 0;
	double distY = 0;

	// Only works for positive values
	distX = toFollow.getX() - Me.getX();
	distY = toFollow.getY() - Me.getY();

	// Move in largest distance difference
	if (distX > distY)
	{
		if(Me.getX() > toFollow.getX())
		{Me.setDir(LEFT);}
		else if(Me.getX() < toFollow.getX())
		{Me.setDir(RIGHT);}
	}
	else if(distX < distY)
	{
		if(Me.getY() > toFollow.getY())
		{Me.setDir(DOWN);}
		else if(Me.getY() < toFollow.getY())
		{Me.setDir(UP);}
	}
	else {Me.setDir(STOP);}

}

void LogAI::Dialog(void)
{
	int say = rand() % 5;

	switch (say)
	{
	case 0:
		std::cout << " You a'ight mate? ";
		break;

	case 1:
		std::cout << "There's no use crying over every mistake, \n";
		std::cout << "You just keep on trying until you run out of cake.";
		
		break;

	case 2:
		std::cout << "Did you break my pot? ";
		break;

	case 3:
		std::cout << "I feel like a dirty capitalist! ";
		break;

	case 4:
		std::cout << "What is a Canada?";
		break;

	default:
		std::cout << "Hello. ";

	}
}