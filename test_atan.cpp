#include <math.h>
#include <iostream>
#include "assist/assistence.h"

void printAtans(double denum, double num);

int main() {
    double x,y;
    // punten in het 1e kwadrant
    std::cout << std::endl << "################# 1e KWADRANT ###################" << std::endl;
    printAtans(1,1);
    printAtans(1,2);
    printAtans(2,1);
    // punten in het 2e kwadrant
    std::cout << std::endl << "################# 2e KWADRANT ###################" << std::endl;
    printAtans(1,-1);
    printAtans(1,-2);
    printAtans(2,-1);
    // punten in het 2e kwadrant
    std::cout << std::endl << "################# 3e KWADRANT ###################" << std::endl;
    printAtans(-1,-1);
    printAtans(-1,-2);
    printAtans(-2,-1);
    // punten in het 4e kwadrant
    std::cout << std::endl << "################# 4e KWADRANT ###################" << std::endl;
    printAtans(-1,1);
    printAtans(-1,2);
    printAtans(-2,1);

}

void printAtans(double denum, double num) {
    std::cout << std::endl;
    std::cout << "atan2( " << denum << ", " << num << " ) = " << atan2(denum,num) << std::endl;
    std::cout << "customatan2( " << denum << ", " << num << " ) = " << assist::atan2(denum,num) << std::endl;
    std::cout << std::endl;
}

