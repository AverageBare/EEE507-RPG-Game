#include "Inventory.h"


Inventory::Inventory(void)
{
	this->cap = 2;
	this->nrOfItems = 0;
	this->itemArr = new Items*[cap];
}


Inventory::~Inventory(void)
{
	for (size_t i = 0; 1 < this->nrOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] itemArr;
}

void Inventory::expand()
{
	this->cap *= 2;

	Items **tempArr = new Items*[this->cap];

	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		tempArr[i] = new Items(*this->itemArr[i]);
	}

	for (size_t i = 0; i < this->nrOfItems; i++)
	{
		delete this->itemArr[i];
	}
	delete[] this->itemArr;

	this->itemArr = tempArr;

	this->initialize(this->nrOfItems);
}

void Inventory::initialize(const int from)
{
	for (size_t i = from; i < cap; i++)
	{
		this->itemArr[1] = nullptr;
	}
}

void Inventory::addItem(const Items &item)
{
	if(this->nrOfItems >= this->cap)
	{
		expand();
	}
	this->itemArr[this->nrOfItems++] = new Items(item);
}

void removeItem(int index)
{


}