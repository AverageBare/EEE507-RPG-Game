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

void Game::MainMenu()
{
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "1. Create a new character" << std::endl;
    std::cout << "0. Quit" << std::endl << std::endl;
    std::cin >> option;

}

void Game::Update()
{

}

void Game::Clean()
{
   // delete Game;
}

#endif // GAME_H
