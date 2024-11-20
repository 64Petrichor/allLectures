#include <stdio.h>
#include <stdlib.h>

void displaybits(unsigned int value) {
    unsigned int mask = 1 << 31;
    printf("%10u = ",value); //prints the value with 10 spaces
    //value = 00000000 00000000 11111111 11111111
    //mask  = 10000000 00000000 00000000 00000000
    for (unsigned int c = 1; c <=32; ++c) {
        //compares the first num in value with the 1 in mask, if they're both 1, prints 1, else 0
        printf("%d", value & mask ? 1 : 0); 
        value <<= 1; // equates value with value shifted 1 bit to the left (syntax kinda looks like x += 1 btw)
        if (c % 8 == 0) printf(" "); // print space after 8 bits
    }
    printf("\n");
}

int main () {
    unsigned int n = 65535;
    displaybits(n);
    return 0;
}