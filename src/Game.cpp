//
// Created by Austin Roa on 7/26/18.
//

#include "../headers/Game.h"

Game::Game() {
    // Initialize
    playerChoice = 0;
}

Game::~Game() {

}

// Welcome message to player
void Game::introMessage() {
    std::cout << "=================================" << std::endl;
    std::cout << "|| Welcome to Fate of the Fool ||" << std::endl;
    std::cout << "=================================" << std::endl;
}

void Game::mainMenu() {
    std::cout << "========== MAIN MENU ==========" << std::endl;
    std::cout << "|| 1. Start Game             ||" << std::endl;
    std::cout << "|| 2. Travel                 ||" << std::endl;
    std::cout << "|| 3. Stats                  ||" << std::endl;
    std::cout << "|| 4. Level Up               ||" << std::endl;
    std::cout << "|| 5. Shop                   ||" << std::endl;
    std::cout << "|| 6. Rest                   ||" << std::endl;
    std::cout << "|| 7. Quit                   ||" << std::endl;
    std::cout << "===============================" << std::endl;

    std::cin >> playerChoice;
}

// Begin game
void Game::gameInit() {
    character.playerName();
    std::string name = character.getName();

    std::cout << "Welcome " << name << "!" << std::endl;
}

