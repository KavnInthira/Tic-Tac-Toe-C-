#include "func.h"
#include <iostream>


int main() {

    int x = 0;
    int board[3][3] =  {{2,2,2},{2,2,2},{2,2,2}}; //creating board 3 x 3 board
    std::string visualBoard[3][3] = {{"▢","▢","▢"},{"▢","▢","▢"},{"▢","▢","▢"}}; //board for enduser
    int maxVal_perRow = 2;
    int choice;
    int i = 0; //counter for questions
    std::string playerOne;
    std::string playerTwo;
    

    std::cout << "-----------" << std::endl;
    std::cout << "TIC-TAC-TOE" << std::endl;
    std::cout << "-----------" << std::endl;
    //welcome screen
    std::cout << "" << std::endl;
    std::cout << "Welcome to the game of tic tac toe.. " << std::endl;
    //Getting user info to say whos turn it is.
    std::cout << "Player 1, please type in your name: ";
    std::cin >> playerOne;
    std::cout << "Player 2, please type in your name: ";
    std::cin >> playerTwo;
    std::cout << std::endl;

    if (func::firstMove() == 1) {
        std::cout << playerOne << ", you are Player X, you go first" << std::endl;
        std::cout << playerTwo << ", you go second you are O, you go second" << std::endl;
    } else {
        std::cout << playerTwo << ", you are Player X, you go first" << std::endl;
        std::cout << playerOne << ", you are Player O, you go second" << std::endl;
    }
    std::cout << "" << std::endl;


        
    


    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) {
            std::cout << visualBoard[i][j] << " ";
            if(j == maxVal_perRow) {
                std::cout << "" << std::endl;
            }
        }
    }
    // creating which player goes first.

    return 0;
}