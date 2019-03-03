#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime>
#include "functions.h"

/**
 * @brief The Game class contains the logic for the rpg, including functions and gameplay variables
 * Class functions CamelCase
 * Variables modifiedCamelCase
 *
 * @author Jeremy Eastwood-Smith
 * @license
 * @copyright Jeremy Eastwood-Smith 2019
 */

class Game
{
// Private variables
    int option;
    bool playing;

// Public
public:
    // Constructor and destructor of Game class
    Game();
    virtual ~Game();

    // Operators?

    // Functions
    void MainMenu();
    void Update();
    void Clean();

    // Modifiers

    // Accessors
    inline bool GetPlaying() {return this-> playing; }

};

#endif // GAME_H
