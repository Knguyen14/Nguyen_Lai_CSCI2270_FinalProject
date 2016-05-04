#include <iostream>
#include <string>
#include "TicTacToe.h"

using namespace std;

int main()
{

    bool Finished = true;
    //char currentPlayer;
    string playerXname;
    string playerOname;
    //Declaring our game as a object of the class TicTacToe
    TicTacToe game;
    //the below makes a menu
    std::cout << "Welcome to TicTacToe!" << std::endl;
    std::cout << "Would you like to play? (Y/N)" << std::endl;
    char user_input;
    std::cin >> user_input;
    if (user_input == 'y' || user_input == 'Y') {
        Finished = false;
    }
    else {
        std::cout << std::endl << "You're no fun!" << std::endl;
    }
    //Game Loop
    while (Finished == false) {
        //starts the game by calling it
        game.play();
        //call PlayAgain to see if the players want to play again
        if (game.PlayAgain() == true)
        {
            Finished = true;
        }
        else{
            Finished = false;
        }

    }
    return 0;
}
