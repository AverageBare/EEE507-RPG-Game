#pragma once

#include "Item.h"
// Include of inventory.h required for character
class Inventory
{
private:
	// Creating a pointer pointer array
	Item **items;
	unsigned cap;
	unsigned nrOfItems;

	// Private functions
	void initialize(const unsigned from = 0);
	void expand();

public:
	// Constructor / Destructors
	Inventory(unsigned cap = 2);
	//Creating a copy of inventory from another
	Inventory(const Inventory& other);
	virtual ~Inventory(void);

	// Operators
	void operator = (const Inventory& other);
	Item& operator [] (const unsigned index);

	// Accessors
	const unsigned& size() const;
	const unsigned& capacity() const;
	Item& at(const unsigned index);
	// Modifiers


	// Functions
	void add(const Item& item);
	void remove(const unsigned index);
};

