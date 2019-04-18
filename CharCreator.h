/** List Character maintanence
* Create  lists to store multiple enemies with individual AI
* 
* 
* @todo 
* @author Jeremy Eastwood-Smith <eastwood_smith-j@ulster.ac.uk>
* @licence https://choosealicense.com/licenses/mit/
* @copywrite if(!Broken){don'tFixIt();}
*/


#include <list>
#include "LogAI.h"
#include "Character.h"


class CCreator
{
	// Data 
private:

	std::list<Character> Enemies;
	std::list<LogAI> AIs; // Only usefull if Hostile and Nuetral are same class


	// Constructor & destructor
public:
	CCreator(void);
	~CCreator(void);

	// Services
	void AddEnemies(int num);
	void KillEnemy(void);

	string RandName(void);

};