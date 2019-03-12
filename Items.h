#pragma once

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Items
{
public:
	Items(void);
	virtual ~Items(void);

	inline std::string debupPrint() const {};
	{
		std::cout << name << std::endl;
	}
private:
	std::string name;
	int buyValue;
};

