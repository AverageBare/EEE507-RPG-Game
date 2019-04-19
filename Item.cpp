#include "Item.h"


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/** Default constructor of class Item
*/
Item::Item(){}

/** Default destructor of class Item
*/
Item::~Item(){}

/** Initializing the protected variables in class Item,
*   setting them to a default value.
*/
Item::Item(string loot, int ID, int value)
{
	loot = " ";
	ID = 0; 
	value = 0;
}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/** Default constructor for class Weapon which initializes the values of WeaponDamage and
*   WeaponRange as = 0.
*
*/ 
Weapon::Weapon()
{
	WeaponDamage = 0;
}

int Weapon::GetDamage()
{
	return WeaponDamage;
}


Weapon::~Weapon()
{

}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


Sword::Sword()
{
	this->loot = "Atlantean Sword";
	ID = 1;
	value = 50;
	WeaponDamage = 2;

}


string Sword::GetLoot()
{
	return this->loot;

}

int Sword::GetID()
{
	return this->ID;
}

int Sword::GetValue()
{
	return this->value;
}

int Sword::GetDamage()
{
	return WeaponDamage;

}

Sword::~Sword(void)
{


}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


Pistol::Pistol()
{
	this->loot = "44 Magnum";
	ID = 2;
	WeaponDamage = 4;

}

Pistol::~Pistol(void)
{

}


// Functions

string Pistol::GetLoot()
{
	return this->loot;
}

int Pistol::GetID()
{
	return this->ID;
}

int Pistol::GetValue()
{
	return this->value;
}

int Pistol::GetDamage()
{
	return WeaponDamage;

}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


Shotgun::Shotgun()
{
	this->loot = "Master Blaster";
	ID = 3;
	WeaponDamage = 5;
	
}


Shotgun::~Shotgun(void)
{

}

// Functions

string Shotgun::GetLoot()
{
	return this->loot;
}

int Shotgun::GetID()
{
	return this->ID;
}

int Shotgun::GetValue()
{
	return this->value;
}

int Shotgun::GetDamage()
{
	return WeaponDamage;
}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
