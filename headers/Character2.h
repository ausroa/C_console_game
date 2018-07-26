//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_CHARACTER2_H
#define C_CONSOLE_GAME_CHARACTER2_H

#include <iostream>

class Character2 {
private:
    std::string name;

public:
    Character2();
    ~Character2();

    // Getters
    std::string getName() { return name; };

    // Ask for name
    void player2Name();
};


#endif //C_CONSOLE_GAME_CHARACTER2_H
