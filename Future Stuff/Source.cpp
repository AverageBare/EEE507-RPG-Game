#include "Header.h"

Test::Test(string name, int howMany)
{
	Name = name;
	BumsLicked = howMany;
}

Test::Test()
{
	BumsLicked = 9;

}

void Test::operator << (list<Test>::iterator.pointer toPrint)
{
	cout << "Name: " << toPrint-> Name << endl;
	cout << "And they have licked " << toPrint ->BumsLicked << " bums";

}


string Test::GetName(void) const
{
	return Name;
}

int Test::HowMany(void)
{
	return BumsLicked;
	
}

void Test::SetName(string newName)
{
	this-> Name = newName;
}

void Test::SetBums(int many)
{
	this-> BumsLicked = many;
}


void addTest(Test & newT);
void removeTest();

int main()
{
	Test jesus("Jesus", 7);
	Test satan;

	list<Test> myTests(3, jesus);
	list<Test>::iterator it;
	
	// Insert element to list 
	it = myTests.begin();
	advance(it, 2);
	//*it = jesus;
	//it++;
	//it++;
	myTests.insert(it, satan);

	cout << it;

}