#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int num;
    printf("Enter the number of elements; ");
    scanf("%d", &num);

    int *ptr = (int *) malloc(num * sizeof(int));
    if (ptr == NULL) {printf("memory allocation failed"); free(ptr);}

    for (int i = 0; i < num; i++) {
        *(ptr + i) = i;
        printf("*(ptr + i) = ptr[i] = %d\n", *(ptr + i));
    }
    free(ptr);

    //Allocate mamory for a 2D array of size x by y
    int x,y;
    int** grid = (int**)malloc(x * sizeof(int*)); //make an malloc of pointers with x pointers
    for (int i = 0; i < x; i++) {
        grid[i] = (int*)malloc(y*sizeof(int)); //make each pointer point to an array with y elements
    }
    //now you can address a value in the array as grid[i][j]


    //a different way to do 2D array, have a normal array of pointers
    int *ptrs[5];
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