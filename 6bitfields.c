#include <stdio.h>
#include <stdlib.h>

int main () {
    // Bit fields are the struct or union members with a predefined width
    //The width must be an integer constant between 0 and the total number of bits used to store an int on your system (usually 32)

    struct date {
        unsigned int d : 5; // day will store a max of 31 = 11111, which is 5 bits.
        unsigned int m : 4;// month will store a max of 12 = 1100, which is 4 bits.
        unsigned int y : 12;// year will store a max of 3000 = 101110111000, which is 12 bits.
    }

    struct test {
        unsigned int bean : 33; // will give you error because it is larger than the total number of bits used to store an int (which is 32)
    }

    return 0;
}