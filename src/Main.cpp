#include "../headers/Game.h"

int main() {
    // Class instances
    Game game;
    Character character;

    // Welcome player
    game.introMessage();
    game.mainMenu();
    game.gameInit();
    return 0;
}