#include "func.h"
#include <iostream>


int main() {

    int x = 0;
    int board[3][3] =  {{2,2,2},{2,2,2},{2,2,2}}; //creating board 3 x 3 board
    std::string visualBoard[3][3] = {{"▢","▢","▢"},{"▢","▢","▢"},{"▢","▢","▢"}}; //board for enduser
    int maxVal_perRow = 2;
    int choice;
    int i = 0; //counter for game.
    std::string playerOne;
    std::string playerTwo;
    int row; //user marks where to place move
    int column; //user marks where to place move

    int firstMove; //if 0 player one is x if 1 then player 2 is
    std::string player; 

    std::cout << "     -----------" << std::endl;
    std::cout << "     TIC-TAC-TOE" << std::endl;
    std::cout << "     -----------" << std::endl;
    //welcome screen
    std::cout << "" << std::endl;
    std::cout << "Welcome to the game of tic tac toe.. " << std::endl;
    //Getting user info to say whos turn it is.
    std::cout << "Player 1, please type in your first name: ";
    std::cin >> playerOne;
    std::cout << "Player 2, please type in your first name: ";
    std::cin >> playerTwo;
    std::cout << std::endl;

    if (func::firstMove() == 1) {
        firstMove = 0;
        std::cout << playerOne << ", you are Player X, you go first" << std::endl;
        std::cout << playerTwo << ", you go second you are O, you go second" << std::endl;
    } else {
        firstMove = 1;
        std::cout << std::endl; //setting 1 or 2 helping program knows who goes first.
        std::cout << playerTwo << ", you are Player X, you go first" << std::endl;
        std::cout << playerOne << ", you are Player O, you go second" << std::endl;
    }
    std::cout << "" << std::endl;

    while (i < 1) { 
        std::cout << "Game in process...." << std::endl;
            if(firstMove == 1) { //detecting who goes first.
                player = "x";
            } else if (firstMove == 0) {
                player = "o";
            } else {
                player = "unknown player";
            }
        std::cout << player <<" ,choose a location (row, column ex: 1 2): ";
        std::cin >> row; //taking in user inputs row and column
        std::cin >> column;
        std::cout << std::endl;
            for (int i = 0; i < 3; i++){ // loop to print board
                for(int j = 0; j < 3; j++) {
                    std::cout << visualBoard[i][j] << " ";
                    if(j == maxVal_perRow) {
                        std::cout << "" << std::endl;
                    }
                }
            }
        std::cout << std::endl;
            if(firstMove == 1) { //switching x and o
                firstMove--;
            } else {
                firstMove++;
            }
    }
   

    return 0;
}