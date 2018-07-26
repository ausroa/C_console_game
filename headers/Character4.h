//
// Created by Austin Roa on 7/26/18.
//

#ifndef C_CONSOLE_GAME_CHARACTER4_H
#define C_CONSOLE_GAME_CHARACTER4_H

#include <iostream>

class Character4 {
private:
    std::string name;

public:
    Character4();
    ~Character4();

    // Getters
    std::string getName() { return name; };

    // Ask for name
    void player4Name();
};


#endif //C_CONSOLE_GAME_CHARACTER4_H
