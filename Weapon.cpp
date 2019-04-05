#include "Weapon.h"


Weapon::Weapon(
		int damageMin,
		int damageMax,
	
		std::string name,
		unsigned type,
		unsigned rarity,
		unsigned value)
		: Item(name, type, rarity, value)

{
	this->damageMax = damageMax;
	this->damageMin = damageMin;
}


Weapon::~Weapon(void)
{

}

Weapon * Weapon::clone() const
{
	return new Weapon(*this);
}


const std::string Weapon::toString() const
{
	std::stringstream ss;

	ss << " | Name: " << this->getName() 
		<< " | Type: " << this->getType()
		<< " | Rarity: " << std::string(this->getRarity(), '*') 
		<< " | Damage: " << this->damageMin << " - " << this->damageMax;

	return std::string();
}

// Functions

virtual Item* clone() = 0;


virtual const std::string Item::toString() const = 0
{
	std::stringstream ss;

	ss << "Name: " << this->name
		<< " | Type: " << this->type
		<< " | Rarity: " << this->rarity
		<< " | Value: " << this->value
		<< "\n";

	return std::string();
}