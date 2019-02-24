#include "game.h"


int main(void)
{
    srand(time(NULL));

    Game game;

    while (game.GetPlaying())
    {
        game.MainMenu();

    }

    return 0;
}
