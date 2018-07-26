//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_CHARACTER3_H
#define C_CONSOLE_GAME_CHARACTER3_H

#include <iostream>

class Character3 {
private:
    std::string name;

public:
    Character3();
    ~Character3();

    // Getters
    std::string getName() { return name; };

    // Ask for name
    void player3Name();
};


#endif //C_CONSOLE_GAME_CHARACTER3_H
