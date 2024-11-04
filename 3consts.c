#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int *ptr; //stores an address
    const int cn; //stores a const data
    /*
    you know how you write const (data type) (var name) , and it makes the variable const
    //                                                                                const (datatype) (name)
    so if the datatype is an address, and you want a const address, you would write   const    int *     cr  , right?
    NO BECAUSE THIS SILLY HOUR AT THE C OFFICE
    apparently that actually turns the number stored at the address cosnt (why tho)
    
    if you want an actually a const address , you write   int * const bx   , which tbh makes me ;)
    becuase lets break all the initialization conventions we've been using for the past year
    */



    const int * crosshair     ; // const data, non-const address
    int * const box; // non-const data, const address

    *crosshair = 1; // cant change the number stored at the address
    crosshair = 0; // can change the address the (so the number it points to changes)

    *box = 1; // the number stored at the address can be changed
    box = 0; // cant change the addess cannot be changes tho

    return 0;
}