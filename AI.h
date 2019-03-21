/* Generic AI for NPC and Enemies
Must Specify Threat level
Public
Member Functions:
Member variables:

@author Jeremy Eastwood-Smith
@licence
@copywrite pending.
*/

#pragma once
#include <iostream>
#include <windows.h>

class AI
{
private:

protected:
	// Threat level hostile = 1, nuetral = 0 // Could be scalable depending on enemy, aggroRadius?
	bool threat;
	int direction;

	// Member functions
	void Clear(void);

public:

	bool GetThreat(void);
	int GetDirection(void);
	int RandDir(int wait); // after no movement for x tics, assign a direction to move in, include wall physics

	void Update(void);

	// Constructors and Destructor
	AI(void);
	AI(const bool agro);
	~AI(void);
};

