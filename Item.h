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
private:

/** The Name(loot), Tag(ID) and Value(value) of each Item
*/


	//string loot;
	
protected:

/** Virtual functions that are protected so they can be inhereted by the derived classes
*/

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

	int ID;
	int value;

	string loot;

public:
	Item(string loot, int ID, int value);
	Item();
	virtual ~Item(void);

	

};

  ///////////////////////////////////////////////////////////////////////////////
 ///////////// CREATING A WEAPON CLASS FROM THE BASE CLASS ITEM ////////////////
///////////////////////////////////////////////////////////////////////////////


class Weapon : public Item
{
protected:

/** Protected variable so derived classes from Item will inheret WeaponDamage   
*/
	int WeaponDamage;
	
public:

	Weapon();
	~Weapon();	



	int GetValue() const;
	virtual int GetDamage(void);
	//virtual float getRange(void) const = 0; // Speak to Jezza
	
	
	
};


  //////////////////////////////////////////////////////////////////////////
 ////////////// CREATING A WEAPON FROM THE BASE CLASS WEAPON //////////////
//////////////////////////////////////////////////////////////////////////


class Sword : public Weapon
{
private:
	
public:
	// float getRange(void) const = { 1 }
	Sword();
	~Sword();

	// Functions

string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
};



//// Creating another Weapon from the base class Weapon////


class Pistol : public Weapon
{
public:
	//Pistol(const std::string& loot, int ID,int WeaponDamage);
		//: Weapon("44 Magnum", 2, 4) {}
	
	// float getRange(void) const = { 2 }

	Pistol();
	~Pistol();


	// Functions

string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
};

class Shotgun : public Weapon
{
public:
	
	// float getRange(void) const = { 1 }

	Shotgun();
	~Shotgun();

	// Functions

	string GetLoot();
	int GetID();
	int GetValue();
	int GetDamage();
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



 //////////////////////////TESTING ONLY////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//class Player
//{
//private:
//   Weapon* weapon;
	//Sword GS;
//public:
//   Player(void) : weapon(0) { }
//   void setWeapon(Weapon* weapon) { delete this->weapon; this->weapon = weapon; }
//   // Weapon* getLoot(void); const { return this->ID;}
//   Weapon* getWeapon(void) const { return this->weapon; }
//   ~Player(void) { delete this->weapon; }



//};

//////////////////////////////////////////////////////////////////////////
int main()
{
	int dud;
	//Player player;
 // player.setWeapon(new Sword(2));
 // player.setWeapon(new Pistol(4));
 // cout << "\t" << player.getWeapon()->GetDamage() << endl; // << player.getWeapon()->getLoot()
 
  Sword bro;
  string SwordName = bro.GetLoot(); 
  int SwordID = bro.GetID();
  int SwordValue = bro.GetValue();
  int SwordATK = bro.GetDamage();

  cout << SwordID  << " " << SwordName << " Damage is : " << SwordATK << " ATK" << endl << "Value is : " << SwordValue << endl;
  cin >> dud;
  
  

  return 0;


}

 //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
