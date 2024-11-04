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


    int *ptrs[5];
    for (int i  = 0; i < 5; i++) {
        ptrs[i] = (int *) malloc(sizeof(int) * (i + 1));
        if (ptrs[i] == NULL) {printf("memory allocation failed"); free(ptrs[i]);}
        
        printf("Array %d: ", i);
        for (int j = 0; j <= i; j++) {
            ptrs[i][j] = (i+1) * (j+1);
            printf("%d ", ptrs[i][j]);
        }
        printf("\n");
        free(ptrs[i]);
    }
    return 0;
}