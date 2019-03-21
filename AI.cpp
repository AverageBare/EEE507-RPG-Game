#include "AI.h"



// Constructor: Must have a Threat Level; 1 (Hostils) or 0 (Nuetral) 
AI::AI(const bool agro)
{
	// Set private value to initiating Agro level
	threat = agro;
}


AI::~AI(void)
{
	Clear();
}

void AI::Clear(void)
{
	memset(this, 0, sizeof(this));
}

bool AI::GetThreat(void)
{
	// Output Threat
	std::cout << this->threat;

	return threat;
}

int AI::GetDirection(void)
{
	// Output direction
	std::cout << this-> direction;

	return direction;
}

int AI::RandDir(int wait)
{
	// Create temp direction variable
	int dir;

	// Check if (PlayerXY() != Map.wall)
	//{
		dir = 0;
			
		Sleep(wait);//for wait duration

		dir = rand() % 4;
	//}
	//else 
	//{
		//while(dir = direction)
		//dir = rand() % 4;
	//}
return dir;
}

void AI::Update(void)
{
	// Call all periodic functions
	RandDir(3);
}
