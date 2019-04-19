
#include "Item.h"


//////////////////////////////////////////////////////////////////////////
//////////////////////////// ITEM ///////////////////////////////////////

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

/** Default constructor for derived class Weapon which initializes the variables WeaponDamage and WeaponRange.
*   The protected variables that will be inhereted by derived weapon classes.
*   These variables have been declared and initialiased as = 0;
*/ 
Weapon::Weapon()
{
	WeaponDamage = 0;
	WeaponRange = 0;
}

// ACCESSORS 

/** Accessor for class Weapon in order to publicy access the protected variable WeaponDamage.
*   @return this WeaponDamage
*/
int Weapon::GetDamage()
{
	return WeaponDamage;
}
/** Accessor for class Weapon in order to publicy access the protected variable WeaponRange.
*   @return this WeaponRange
*/
int Weapon::GetRange()
{
	return WeaponRange;
}

Weapon::~Weapon()
{

}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////


/** Default constructor for class Sword derived from base class Weapon, when an object is created from class Sword 
*   it will be initialised with this list of inhereted protected variables that the author has allocated. To publicy
*   access these protected variables other authors may use the Accessors below.
*/
Sword::Sword()
{
	this->loot = "Atlantean Sword";
	ID = 1;
	value = 50;
	WeaponDamage = 2;
	WeaponRange = 1;

}

// ACCESSORS

/** Accessor for class Sword in order to publicy access the protected string loot.
*   @return this Swords loot(name)
*/
string Sword::GetLoot()
{
	return this->loot;

}

/** Accessor for class Sword in order to publicy access the protected variable ID.
*   @return this Swords ID(Tag)
*/
int Sword::GetID()
{
	return this->ID;
}

/** Accessor for class Sword in order to publicy access the protected variable value.
*   @return this Swords value.
*/
int Sword::GetValue()
{
	return this->value;
}

/** Accessor for class Sword in order to publicy access the protected variable saved as WeaponDamage.
*   @return this Swords WeaponDamage.
*/
int Sword::GetDamage()
{
	return this->WeaponDamage;

}

/** Accessor for class Sword in order to publicy access the protected variable saved as WeaponRange.
*   @return this Swords WeaponRange.
*/
int Sword::GetRange()
{
	return this->WeaponRange;
}

Sword::~Sword(void)
{


}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/** Default constructor for class Pistol derived from base class Weapon, when an object is created from class Pistol 
*   it will be initialised with this list of inhereted protected variables that the author has allocated. To publicy
*   access these protected variables other authors may use the Accessors below.
*/
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


// ACCESSORS

/** Accessor for class Pistol in order to publicy access the protected string saved as loot.
*   @return this Pistols loot(name)
*/
string Pistol::GetLoot()
{
	return this->loot;
}

/** Accessor for class Pistol in order to publicy access the protected variable saved as ID.
*   @return this Pistols ID.
*/
int Pistol::GetID()
{
	return this->ID;
}

/** Accessor for class Pistol in order to publicy access the protected variable saved as value.
*   @return this Pistols value.
*/
int Pistol::GetValue()
{
	return this->value;
}

/** Accessor for class Pistol in order to publicy access the protected variable saved as WeaponDamage.
*   @return this Pistols WeaponDamage.
*/
int Pistol::GetDamage()
{
	return this->WeaponDamage;

}

/** Accessor for class Pistol in order to publicy access the protected variable save as WeaponRange.
*   @return this Pistols WeaponRange.
*/
int Pistol::GetRange()
{
	return this->WeaponRange;
}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/** Default constructor for class Shotgun derived from base class Weapon, when an object is created from class Shotgun 
*   it will be initialised with this list of inhereted protected variables that the author has allocated. To publicy
*   access these protected variables other authors may use the Accessors below.
*/
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

// ACCESSORS

/** Accessor for class Shotgun in order to publicy access the protected string saved as loot.
*   @return this Shotguns loot(name).
*/
string Shotgun::GetLoot()
{
	return this->loot;
}

/** Accessor for class Shotgun in order to publicy access the protected variable saved as ID.
*   @return this Shotguns ID.
*/
int Shotgun::GetID()
{
	return this->ID;
}

/** Accessor for class Shotgun in order to publicy access the protected variable saved as value.
*   @return this Shotguns value.
*/
int Shotgun::GetValue()
{
	return this->value;
}

/** Accessor for class Shotgun in order to publicy access the protected variable saved as WeaponDamage.
*   @return this Shotguns WeaponDamage.
*/
int Shotgun::GetDamage()
{
	return this->WeaponDamage;
}

/** Accessor for class Shotgun in order to publicy access the protected variable save as WeaponRange.
*   @return this Shotguns WeaponRange.
*/
int Shotgun::GetRange()
{
	return this->WeaponRange;
}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/** Default constructor for class Potion derived from base class Weapon, when an object is created from class Potion 
*   it will be initialised with this list of inhereted protected variables that the author has allocated. To publicy
*   access these protected variables other authors may use the Accessors below.
*/

Potion::Potion()
{
	this->loot = "Health Potion";
	ID = 4;
	value = 200;
	this->Health = 10;		
}

Potion::~Potion(void)
{

}

// ACCESSORS

/** Accessor for class Potion in order to publicy access the protected string saved as loot.
*   @return this Potions loot(name).
*/
string Potion::GetLoot()
{
	return this->loot;
}

/** Accessor for class Potion in order to publicy access the protected variable saved as ID.
*   @return this Potions ID.
*/
int Potion::GetID()
{
	return this->ID;
}

/** Accessor for class Potion in order to publicy access the protected variable saved as Health.
*   @return this Potions Health.
*/
int Potion::GetHealth()
{
	return this->Health;

}


//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
