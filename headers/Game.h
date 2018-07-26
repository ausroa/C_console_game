//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_GAME_H
#define C_CONSOLE_GAME_GAME_H

#include <iostream>
#include <string>
#include "../headers/Character.h"
#include "../headers/Character2.h"
#include "../headers/Character3.h"
#include "../headers/Character4.h"

class Game {
private:
    // Player Input
    int playerChoice;

    // Character instance
    Character character;
    Character2 character2;
    Character3 character3;
    Character4 character4;

public:
    Game();
    ~Game();

    void introMessage();
    void mainMenu();
    void gameInit();
};


#endif //C_CONSOLE_GAME_GAME_H
