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
	WeaponRange = 0;
}

int Weapon::GetDamage()
{
	return WeaponDamage;
}

int Weapon::GetRange()
{
	return WeaponRange;
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
	WeaponRange = 1;

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
	return this->WeaponDamage;

}

int Sword::GetRange()
{
	return this->WeaponRange;
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
	value = 100;
	WeaponDamage = 4;
	WeaponRange = 3;

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
	return this->WeaponDamage;

}

int Pistol::GetRange()
{
	return this->WeaponRange;
}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


Shotgun::Shotgun()
{
	this->loot = "Master Blaster";
	ID = 3;
	value = 140;
	WeaponDamage = 5;
	WeaponRange = 2;
	
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
	return this->WeaponDamage;
}

int Shotgun::GetRange()
{
	return this->WeaponRange;
}



//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
