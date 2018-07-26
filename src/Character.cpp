//
// Created by Austin Roa on 7/26/18.
//

#include "../headers/Character.h"

Character::Character() {
    name = "";
}

Character::~Character() {

}

void Character::playerName() {
    std::cout << "Who are you fool!? ";
    std::cin >> name;
}
