#pragma once

#include <iostream>
#include <string>
#include <list>

using namespace std;


class Test
{
public:

	Test(void);
	Test(string name, int howMany);

	//~Test(void);

	void operator << (list<Test>::iterator.pointer & toPrint);

	// Accessors
	string GetName(void) const;

	int HowMany(void);

	// Mutators
	void SetName(string newName);

	void SetBums(int many);

private:

	string Name;
	int BumsLicked;

};