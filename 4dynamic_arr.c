#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {



    int num;
    printf("Enter the number of elements; ");
    scanf("%d", &num);

    int *ptr = (int *) malloc(num * sizeof(int)); //initializes a pointer to a int, and manually allocates space for 'num' ints, basically an int array of size num
    if (ptr == NULL) {printf("memory allocation failed"); free(ptr); return 1;} // checks whether the malloc was succesfull or not
    
    for (int i = 0; i < num; i++) { //you can increment through it like a normal array 
        ptr[i] = i; 
        printf("*(ptr + %zu) = ptr[i] = %d\n",i , ptr[i]); 
    }

    for (size_t i = 0; i < num; i++) { // since a normal array's name points to the first element, and this is same, you can use offset notation to increment in the "array"
        printf("*(ptr + %zu) = ptr[i] = %d\n",i , *(ptr + i)); 
    }

    ptr = (int *) realloc (ptr, (num + 1) * sizeof(int)); // realloc allows you to change the size of the malloc, here i'm adding an extra space as an example
    free(ptr); // deaallocates the manually allocted space at the given pointer




    //Allocate mamory for a 2D array of size x by y
    int x,y;
    int** grid = (int**)malloc(x * sizeof(int*)); // make an malloc of pointers with x pointers
    for (int i = 0; i < x; i++) {
        grid[i] = (int*)malloc(y*sizeof(int)); // make each pointer point to an array with y elements
    }
    // now you can address a value in the array as grid[i][j]



    //a different way to do 2D array, where instead of manually allocating the array of pointers, you can do it normally
    int *ptrs[5]; //an array of pointers
    for (int i  = 0; i < 5; i++) {
        ptrs[i] = (int *) malloc(sizeof(int) * (i + 1));//make each pointer point to an array with i elements
        if (ptrs[i] == NULL) {printf("memory allocation failed"); free(ptrs[i]);}
        printf("Array %d: ", i);    //prints i multiples of i+1
        for (int j = 0; j <= i; j++) {
            ptrs[i][j] = (i+1) * (j+1);
            printf("%d ", ptrs[i][j]);
        }
        printf("\n");
        free(ptrs[i]);
    }


    return 0;
}