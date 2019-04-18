#include <iostream>
#include "Character.h"
using namespace std;


Character::Character()
{
	this->X = 10;
	this->Y = 10;

	this->playerName = "";
	this->level = 1;
	this->xp = 0;
	this->xpNext = 0;
	this->hp = 1;
	this->hpMax = 1;
	this->att = 1;
	this->def = 1;
	this->direction = 0;
	// Player Icon will be first letter of name Capitalised
	threat = false;
	playerIcon= "T";

	
}



Character::Character(std::string name, bool aggro)
{
	this->X = 10;
	this->Y = 10;
	this->playerName = name;
	this->level = 1;
	this->xp = 0;
	this->xpNext = 0;
	this->hp = 1;
	this->hpMax = 1;
	this->att = 1;
	this->def = 1;
	this->direction = 0;
	// J
	this->threat = aggro;
} 



Character::~Character()
{

}
//Functions below
void Character::namePlayer()
{
	cout << "Name your hero... ";
	cin >> this->playerName;
}

/*char Character::getPlayerIcon(string str)
{
	string (playerName);
	str.at(1) = this->playerIcon;
}*/

void Character::resetStat(const std::string name)
{
	this->playerName = "";
	this->level = 1;
	this->xp = 0;
	this->xpNext = level*50;
	this->hp = 8;
	this->hpMax = level*2+8;
	this->att = level+1;/*weaponDamage*/
	this->def = level+1;
	this->threat = true;
	this->statPoints = 0;
	this->direction = 0;
}

void Character::resetAggro(const std::string name)
{
	this->threat = true;
}

void Character::printStats() const
{
	cout<<"Name: " << this->playerName << endl;
	cout<< "Level: " << this->level << endl;
	cout<< "Xp: " << this->xp << " / " << this->xpNext << endl;
	cout<< "Hp: " << this->hp << " / " << this->hpMax << endl;
	cout<< "Att: " << this->att << endl;
	cout<< "Stat Points: " << this->statPoints << endl;			
}

void Character::levelUp()
{
	if (this->xp >= this->xpNext)
	{
		this->xp -= this->xpNext;
		this->level++;
		this->xp = 0;
		this->xpNext= this->level*50;
		this->hpMax = this->level*2+8;
		this->hp=hpMax;
		this->statPoints++;
		cout << "You are now level " << this->level << "!!!" << endl;
	}
}
		
/*void createNewCharacter();
{
	if (i==X && j==Y)
	cout << "T"
}*/

string Character::getPlayerName()
{
	return playerName;
}

int Character::getLevel()
{
	return level;
}

int Character::getXp()
{
	return xp;
}

int Character::getXpNext()
{
	return xpNext;
}

int Character::getX()
{
	return X;
}

int Character::getY()
{
	return Y;
}

int Character::getAtt()
{
	return att;
}

int Character::getDef()
{
	return def;
}

int Character::getHp()
{
	return hp;
}

/*void move(void)
{
	
	if (Input.buttonpress())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'w':
			dir = UP;
			break;
		}
}
	
void Damage()
{
	if (playerX == enemyX && playerY == enemyY)
		health - 1
}
void useWeap(void)
{
	//if (Input.buttonpress())
	//{
			switch (_getch())
				case ' ':
				//swing weapon adjacently
			if dir == LEFT;
			set weaponX == X-1;
			set weaponY == Y;
			if dir == RIGHT;
			set weaponX == X+1;
			set weaponY == Y;
			if dir == UP;
			set weaponX == X;
			set weaponY == Y+1;
			if dir == DOWN;
			set weaponX == X;
			set weaponY == Y-1;
			if case !' ':
			set weaponX == 0;
			set weaponY == 0;
}
void enemyCollision(void)
{
	if getX ==
	//}
*/


/*Character::Character(std::string name)
{
	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expNext = 10;
	this->hp = 10;
	this->maxHp = 10;
	this->att = 1;
	this->def = 1;
	//Attributes+core at beginning
}
const std::string Character::toString()
{
	//The below will all be printed to display their values at
	//the current time
	//Player attributes followed by aux features
	std::stringstream ss;
	ss << "Name = " << this->name << "\n"
		<< "HP = " << this->hp " / " << this->maxHP << "\n"
		<< "Att = " << this->att << "\n"
		<< "Def = " << this->def << "\n"
		<< "\n"
		<< "Level =" << this->level << "\n"
		<< "Exp = " << this->xp << "\n"
		<< "Exp to next = " << this->xpNext << "\n"
		<< "\n";
	return ss.str();
}
} */


// Jeremy

void Character::setSymb(char symbol)
{
	this-> symbol = symbol;
}

int Character::getDir()
{
	return direction;
}
 void Character::setDir(int newDir)
 {
	 newDir = this->direction ;

 }
 void Character::takeDamage(Character & me, Character & attacking /*, item & weapon */)
 {
	hp -= (attacking.getAtt()/*weaponDamage()*/)/me.getDef();
 }
