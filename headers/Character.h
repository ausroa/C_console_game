//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_CHARACTER_H
#define C_CONSOLE_GAME_CHARACTER_H

#include <iostream>

class Character {
private:
    // Player input name
    std::string name;

    // Player attributes

public:
    Character();
    ~Character();

    // Getters
    std::string getName() { return name; };

    // Ask for player's name
    void playerName();
};


#endif //C_CONSOLE_GAME_CHARACTER_H
