#ifndef GAME_H
#define GAME_H
#include <iostream>

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

    // Modifiers

    // Accessors
    bool GetPlaying() const;

};

bool Game::GetPlaying() const
{
    return this -> playing;
}

void Game::MainMenu()
{
    std::cout << "MAIN MENU\n";
    std::cout << "1. Create a new character\n";
    std::cout << "0. Quit\n\n";
    std::cin >> option;

}


#endif // GAME_H
