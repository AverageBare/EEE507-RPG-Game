    
#pragma once



#include<string>
#include<sstream>


enum item_types {WEAPON = 0, ARMOR};
enum item_rarities {COMMON = 0, UNCOMMON, RARE, EPIC, LEGENDARY};

class Item
{
private:
	std::string name;
	unsigned type;
	unsigned rarity;
	unsigned value;

	void generate();
public:
	Item(std::string name,
		unsigned type,
		unsigned rarity,
		unsigned value);
	virtual ~Item(void);

	// Accessors
	const std::string& getName() const;
	const unsigned& getType() const;
	const std::string getTypeAsString;
	const unsigned& getRarity() const;
	const unsigned getRarityAsString() const;
	const unsigned& getValue() const;


	// Functions
	virtual Item* clone() const = 0;
	virtual const std::string toString() const = 0;
};
