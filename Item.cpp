    
#include "Item.h"



// Private functions
void Item::generate()
{
}

// Constructors & Destructors
Item::Item(
		std::string name,
		unsigned type,
		unsigned rarity,
		unsigned value)
{
	this->name = name;
	this->type= type;
	this->rarity = rarity;
	this->value = value;

}


Item::~Item(void)
{

}

// Accessors

const std::string & Item::getName() const
{
	return this->name;
}

const unsigned & Item::getType() const
{
	return this->type;
}

const unsigned & Item::getRarity() const
{
	return this->rarity;
}

const unsigned & Item::getValue() const
{
	return this->value;
}

// Functions
