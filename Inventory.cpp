#include "Inventory.h"

// Private functions

void Inventory::initialize(const unsigned from)
{
	// Creates unsigned int of size t

	for(size_t i = 0; i < this->cap; i++)
	{
		// Trying to delete a pointer that is not set to a value or nullptr will crash the computer
		this->items[i] = nullptr;
	}
}

void Inventory::expand()
{
	this->cap ++;
	
	Item** temp = new Item*[this->cap];

	for(size_t i = 0; i < this->nrOfItems; i++)
	{
		temp[i] = this->items[i];
	}

	delete[] this->items;

	this->items = temp;

	this->initialize(this->nrOfItems);
}


// Constructor / Destructors
Inventory::Inventory(unsigned cap)
{
	this->cap = cap;
	this->nrOfItems = 0;
	this->items = new Item*[cap];

	this->initialize();
}

Inventory::Inventory(const Inventory& other)
{
	this->cap = other.cap;
	this->nrOfItems = other.nrOfItems;

	this->items = new Item*[this->cap];

	this->initialize();

	for(size_t i = 0; i < this->nrOfItems; i++)
	{
		this->items[i] = new Item(*other.items[i]);
	}
}
Inventory::~Inventory(void)
{
	// Creating a for loop to delete items within the **array
	for(size_t i = 0; i < this->nrOfItems; i++)
	{

		delete this->items[i];
	}
	delete [] this->items;
}
// Operators
void Inventory::operator=(const Inventory& other)
{
	if(this != &other)
	{
		for(size_t i = 0; i < this->nrOfItems; i++)
		{
			delete this->items[i];
		}
		delete[] this->items;

		this->cap = other.cap;
		this->nrOfItems = other.nrOfItems;
		
		this->items = new Item*[this->cap];
		
		this->initialize();
		
		for(size_t i = 0; i < this->nrOfItems; i++)
		{
			this->items[i] = new Item(*other.items[i]);
		}
	}

}

Item & Inventory::operator[](const unsigned index)
{
	//Safeguard
	if (index < 0 || index >= this->nrOfItems)
	{
		throw("OUT OF BOUNDS!")
	}

	return *this->items[index];
}

// Accessors
const unsigned & Inventory::size() const
{
	return this->nrOfItems;
}


const unsigned & Inventory::capacity() const
{
	return this->cap;
}

Item & Inventory::at(const unsigned index)
{
	//Safeguard
	if (index < 0 || index >= this->nrOfItems)
	{
		throw("OUT OF BOUNDS!")
	}

	return *this->items[index];
}

// Functions

void Inventory::add(const Item & item)
{

}

void Inventory::remove(const unsigned index)
{

}