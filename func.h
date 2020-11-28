
#include <cstdlib>

namespace func {
    int firstMove(){ //function to choose to who makes the first move.
        int randNum = rand() % 2 + 1;

        return randNum;
    }

}