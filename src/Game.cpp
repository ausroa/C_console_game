//
// Created by Austin Roa on 7/26/18.
//

#include "../headers/Game.h"

Game::Game() {
    // Initialize
    playerChoice = 0;
    playerReady = 0;
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
    std::cout << "|| 7. Inventory              ||" << std::endl;
    std::cout << "|| 8. Quit                   ||" << std::endl;
    std::cout << "===============================" << std::endl;

    std::cin >> playerChoice;
}

// Begin game
void Game::gameInit() {
    character.playerName();
    std::string name = character.getName();

    std::cout << "It's dangerous out there! Bring 3 friends" << std::endl;
    std::cout << "Who are these fools?!" << std::endl;
    character2.player2Name();
    character3.player3Name();
    character4.player4Name();

    std::string name2 = character2.getName();
    std::string name3 = character3.getName();
    std::string name4 = character4.getName();

    std::cout << "Welcome " << name << ", " << name2 << ", ";
<<<<<<< HEAD
=======
<<<<<<< HEAD
    std::cout << name3 << " and " << name4 <<"! \n" << std::endl;
=======
<<<<<<< HEAD
>>>>>>> d68cfe8663615eccbe751b8717f64bcd34b83bf0
    std::cout << name3 << " and " << name4 << "!" << std::endl;

    std::cout << "Our adventure begins in the house of our hero, P1 \n"
                 "After pouring countless hours in the newest F2PMMORPG \n"
                 "'FATE OF THE FOOL Online' \n";
    std::cout << name << " and his clan mates P2, P3, and P4 have geared up to take on their first raid \n\n"
<<<<<<< HEAD
=======
=======
    std::cout << name3 << " and " << name4 <<"! \n\n" << std::endl;
>>>>>>> b41a598b1f7a6ce5859c3864b6f2e6ac9e4aeca6
>>>>>>> d68cfe8663615eccbe751b8717f64bcd34b83bf0

                 "P2: P3 make sure you have 'STRAIGHT SHAFTED' equipped and cast it every time i use 'TASTE THE RAINBOW' \n\n"

                 "P3: Just be sure you and P1 take the agro so P4 and I don't get shrekt in the first wave of ads' \n\n"

                 "P4: My healing turret is maxed out, we're boutta be OP AF. Is everyone reads? \n\n"

                 "P2: Lets get it! \n\n"

<<<<<<< HEAD
=======
    std::cout << name2 << ": " << name3 << " make sure you have 'STRAIGHT SHAFTED' equipped and cast it every time i use 'TASTE THE RAINBOW' \n\n";

    std::cout << name3 << ": Just be sure you and " << name << " take the agro so " << name4 << " and I don't get shrekt in the first wave of ads' \n\n";

    std::cout << name4 << ": My healing turret is maxed out, we're boutta be OP AF. Is everyone reads? \n\n";

    std::cout << name2 << ": Lets get it! \n\n";

<<<<<<< HEAD
>>>>>>> d68cfe8663615eccbe751b8717f64bcd34b83bf0
                 "P3: Ya boy needs some new exotics! \n\n" << std::endl;
    std::cout << "========== Please select a response ========== " << std::endl;
    std::cout << "|| 1. Reads                                  ||" << std::endl;
    std::cout << "|| 2. Bless                                  ||" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cin >> playerReady;

    switch(playerReady) {
        case 1:
            std::cout << name << ": LEEEEEEROOOOOY JANGUS!\n" << std::endl;
            std::cout << "Our heroes rush in and hold their own for several minutes until the raid boss'\n"
            " health is at 50% and unleashes his ult “Fools! You’re Fucked!” wiping out our heroes.\n";
            break;
        case 2:
            std::cout << name << ": you guys wanna take a rip first?\n" << std::endl;
            std::cout << "The four brave blazed souls casually stroll into the dungeon and are instantly obliterated." << std::endl;
            break;
        default:
            break;
    }
}

<<<<<<< HEAD
=======

<<<<<<< HEAD
*/
=======

>>>>>>> 76bfd235decacbe441a50ffb39492d02fffb040a
>>>>>>> 815147ece79da855cdd91fdd90e33f5888f960f1
}
>>>>>>> 39055c00e05d295f5542268b02b5a22c1233d0ee
>>>>>>> b41a598b1f7a6ce5859c3864b6f2e6ac9e4aeca6
>>>>>>> d68cfe8663615eccbe751b8717f64bcd34b83bf0
