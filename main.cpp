#include "func.h"
#include <iostream>


int main() {

    int x = 0;
    int board[3][3] =  {{2,2,2},{2,2,2},{2,2,2}}; //creating board 3 x 3 board
    std::string visualBoard[3][3] = {{"▢","▢","▢"},{"▢","▢","▢"},{"▢","▢","▢"}}; //board for enduser
    int maxVal_perRow = 2;

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