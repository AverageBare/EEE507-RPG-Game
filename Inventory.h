#pragma once

#include "Items.h"
class Inventory
{
public:
	Inventory(void);
	~Inventory(void);
	void addItem(const Items &item);
	void removeItem(int index);

private:
	int cap;
	int nrOfItems;
	Items **itemArr;
	void expand();
	void initialize(const int from);
};

