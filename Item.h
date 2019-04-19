/*
* .
* @author Conan Mcilkenny <mcilkenny-c2@ulster.ac.uk>
* @license https://choosealicense.com/licenses/mit/
* @copyright if(!Broken){don'tFixIt();}
*/

#pragma once

#include<iostream>
#include<string>

using namespace std;

/** Represents the base class Item from which all Items in the game can be based on.
*  The derived items can become various Weapons, Consumables, Miscellaneous items etc..
*  &todo Create Ammo loops/Reload functions once user input has been sorted. 
*/
class Item
{
	
protected:

	// Protected variables inhereted by items
	int ID;
	int value;
	string loot;


	// Protected virtual inline functions which are inhereted by the derived classes

/** Gets the Name of the Item saved as loot.
*   @return this Item's loot.
*/
	virtual string Getloot() { return loot; }

/** Gets the Tag of the Item saved as ID.
*   @return this Item's ID.
*/
	virtual int GetID() { return ID; }

/** Gets the Value of the Item saved as value.
*   @return this Item's value.
*/
	virtual int GetValue() { return value; }


public:

	// Initializer

	Item(string loot, int ID, int value);

	// Default constructor & destructor for class Item
	Item();
	~Item(void);
};

  ///////////////////////////////////////////////////////////////////////////////
 ///////////// CREATING A WEAPON CLASS FROM THE BASE CLASS ITEM ////////////////
///////////////////////////////////////////////////////////////////////////////


class Weapon : public Item
{
protected:

	// Protected variables for derived weapons to inheret.
	int WeaponDamage;
	int WeaponRange;
	
public:


	// Accessors

	int GetRange();
	int GetValue() const;
	int GetDamage();

	// Default constructor & destructor for class Weapon

	Weapon();
	~Weapon();	
};


  //////////////////////////////////////////////////////////////////////////
 ////////////// CREATING WEAPONS FROM THE BASE CLASS WEAPON ///////////////
//////////////////////////////////////////////////////////////////////////

//// Creating a Sword from the base class Weapon////

class Sword : public Weapon
{
private:
	
public:
	// float getRange(void) const = { 1 }

	// Functions

	string Slash() { return "Slash"; }


	// Accessors
	string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
	int GetRange();
	

	// Default constructor & destructor for class Sword

	Sword();
	~Sword();

};



//// Creating a Pistol from the base class Weapon////


class Pistol : public Weapon
{
public:
	
	// float getRange(void) const = { 2 }


	// Functions
	string Bang() { return "Bang"; }

	// Accessors
string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
	int GetRange();

	// Default constructor & destructor for class Pistol
	Pistol();
	~Pistol();
};

//// Creating a shotgun from the base class Weapon////

class Shotgun : public Weapon
{
public:
	
	// float getRange(void) const = { 1 }

	

	// Functions

	string Blast() { return "Blast"; }

	// Accessors

	string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
	int GetRange();
	
	// Default constructors & destructors for class Shotgun
	
	Shotgun();
	~Shotgun();
};

  /////////////////////////////////////////////////////////////////////////
 ///////////// CREATING A POTION FROM THE BASE CLASS ITEM ////////////////
/////////////////////////////////////////////////////////////////////////


//class Potion : public Item
//{
//private:
//	int HP;
//public:
//	Potion(const std::string& loot, int ID, int HP)
//	int getvalue(void) const;
//	virtual int getHP(void) const = 0;
//	
//
//};


  //////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//////class Player
//////{
//////private:
//////   Weapon* weapon;
////	//Sword GS;
//////public:
//////   Player(void) : weapon(0) { }
//////   void setWeapon(Weapon* weapon) { delete this->weapon; this->weapon = weapon; }
//////   // Weapon* getLoot(void); const { return this->ID;}
//////   Weapon* getWeapon(void) const { return this->weapon; }
//////   ~Player(void) { delete this->weapon; }
////
////
////
//////};

  //////////////////////////////////////////////////////////////////////////
 //// ///////////////////////// TESTING ONLY //////////////////////////////
//////////////////////////////////////////////////////////////////////////
int main()
{
	int dud;
	
  //Sword bro;
  //string SwordName = bro.GetLoot(); 
  //int SwordID = bro.GetID();
  //int SwordValue = bro.GetValue();
  //int SwordATK = bro.GetDamage();
  Shotgun bro;
// cout << bro.Slash();
 
  string SwordName = bro.GetLoot(); 
  int SwordID = bro.GetID();
  int SwordValue = bro.GetValue();
  int SwordATK = bro.GetDamage();
  int SwordRNG = bro.GetRange();
   //cout << SwordRNG << endl;
cout << SwordID  << " " << SwordName << " Damage is : " << SwordATK << " ATK" << endl << "Value is : " << SwordValue << endl;
  cin >> dud;
  return 0;


}

 //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
