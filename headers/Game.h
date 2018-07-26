//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_GAME_H
#define C_CONSOLE_GAME_GAME_H

#include <iostream>
#include <string>
#include "../headers/Character.h"

class Game {
private:
    // Player Input
    int playerChoice;

    // Character instance
    Character character;

public:
    Game();
    ~Game();

    void introMessage();
    void mainMenu();
    void gameInit();
};


#endif //C_CONSOLE_GAME_GAME_H
