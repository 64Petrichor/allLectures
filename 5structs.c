#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

/*
struct point {
    int x;
    int y;
} origin;            origin is the name of a newly initialized varaibe with datatype struct
*/

int main () {
    // btw, if you have variables origin1 & origin2, with different structs, you can't do origin1 = origin2, no exceptions
    struct point origin; // just a normal struct
    struct point arr[20]; // an array of structs, so to access a variable inside, arr[4].x
    struct point *ptr;  // it points to the struct object (wdym object)
    
    return 0;
}