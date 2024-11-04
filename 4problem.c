#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int rows;
    printf("enter number of rows");
    scanf("%d", &rows);
    
    int ** ptrs = (int **) malloc(rows * sizeof(int*));
    if (ptrs == NULL) {printf("memory allocation failed"); return 1;;}
    
    for (int i = 0; i < rows; i++) {
        ptrs[i] = (int *) malloc((i+1) * sizeof(int));
        if (ptrs[i] == NULL) {
            printf("memory allocation failed"); 
            return 1;
        }

        printf("Array %d: ", i+1);
        for (int j = 0; j < i+1; j++) {
            ptrs[i][j] = (i+1)*(j+1);
            printf("%d ", ptrs[i][j]);
        }
        printf("\n");
    }

    return 0;
}