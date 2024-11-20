#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool opposite(int x, int y) {
    return ((x ^ y) < 0);
}// 1111 1001 = -5 < 0, so true

int main () {
    //check if opposite signs
    int x = 5, y = -2;// 0000 0101 , 1111 1100
    if (opposite(x,y) == true) {
        printf("yes opposite\n");
    }
    else printf("no opposite");

    //check if pwr 2
    int z ; 
    if ((z&(z-1)) == 0) printf("%d is a pwr of 2", z); 
    //if z=7, 111 & 110 = 110 not 0
    //if z=8, 1000 & 111 = 0 is 0
    //if z=10 1010 & 1001 = 1000 not 0

    //display bits
    unsigned int n = 65535;
    
    return 0;
}