#pragma once

#include<iostream>
#include<string>

using namespace std;


class Item
{
private:
	string loot;
	int ID;
	int value;

public:
	Item(const std::string& loot, int Tag)
		: loot(loot), ID(Tag) { }
	Item();
	~Item();
	
};


  ///////////////////////////////////////////////////////////////////////////////
 ///////////// CREATING A WEAPON CLASS FROM THE BASE CLASS ITEM ////////////////
///////////////////////////////////////////////////////////////////////////////


class Weapon : public Item
{
private:
	int WeaponDamage;
public:
	Weapon(const std::string& loot, int ID, int WeaponDamage)
		: Item(loot, ID), WeaponDamage(WeaponDamage) { }
	int getvalue(void) const;
	virtual int getDamage(void) const = 0;
	//virtual float getRange(void) const = 0; // Speak to Jezza
	Weapon();
	~Weapon();
};


  //////////////////////////////////////////////////////////////////////////
 ////////////// CREATING A WEAPON FROM THE BASE CLASS WEAPON //////////////
//////////////////////////////////////////////////////////////////////////


class Sword : public Weapon
{
public:
	Sword(int WeaponDamage)
		: Weapon("Atlantean Sword", 1, 2) {}
	virtual int getDamage(void) const { return numeric_limits<int>::max(); }
	// virtual float getRange(void) const = { 1 }

	void Swing()
        {
            std::cout << "Slash" << std::endl;
        }

};



//// Creating another Weapon from the base class Weapon////


class Pistol : public Weapon
{
public:
	Pistol(int WeaponDamage)
		: Weapon("44 Magnum", 2, 4) {}
	virtual int getDamage(void) const { return numeric_limits<int>::max();}
	// virtual float getRange(void) const = { 2 }
	void Fire()
        {
            std::cout << "Bang" << std::endl;
        }


};

class Shotgun : public Weapon
{
public:
	Shotgun(int WeaponDamage)
		: Weapon("44 Magnum", 3, 5) {}
	virtual int getDamage(void) const { return numeric_limits<int>::max();}
	// virtual float getRange(void) const = { 1 }

	void Fire();
        
	Shotgun();
	~Shotgun();
};

  /////////////////////////////////////////////////////////////////////////
 ///////////// CREATING A POTION FROM THE BASE CLASS ITEM ////////////////
/////////////////////////////////////////////////////////////////////////


class Potion : public Item
{
private:
	int HP;
public:
	Potion(const std::string& loot, int ID, int HP)
		: Item(loot, ID), HP(HP) { }
	int getvalue(void) const;
	virtual int getHP(void) const = 0;
	

};


  //////////////////////////////////////////////////////////////////////////
 //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////



 //////////////////////////TESTING ONLY////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
class Player
{
  private:
   Weapon* weapon;
  public:
   Player(void) : weapon(0) { }
   void setWeapon(Weapon* weapon) { delete this->weapon; this->weapon = weapon; }
   // Weapon* getLoot(void); const { return this->ID;}
   Weapon* getWeapon(void) const { return this->weapon; }
   ~Player(void) { delete this->weapon; }
};

//////////////////////////////////////////////////////////////////////////
int main()
{
	Player player;
  player.setWeapon(new Sword(2));
  player.setWeapon(new Pistol(4));
  cout << "\t" << player.getWeapon()->getDamage() << endl; // << player.getWeapon()->getLoot()
 
  Shotgun bro;
  

  return 0;


}

 //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////