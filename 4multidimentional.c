#include <stdio.h>
#include <string.h>

int main () {
    int x [2][2] = {1,2,3,4}, y[2][2] = {9,8,7,6}, size = 2, z[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            z[j][i] = y[j][i] + x[j][i];
            printf("%d ", z[j][i]);
        }
        printf("\n");
    }



    char *names[] = {"Shrek", "Pooh", "Donald Duck", "Mickey Mouse"};

    for (int i = 0; i < 4; i++) {
        printf("String %d: %s and its length is %zu\n", i + 1, names[i], strlen(names[i]));
        printf("Address of %s = %p\n", names[i], names[i]);
        
        printf("Individual charaters of the string: \n");
        for (int j = 0; j < strlen(names[i]); j++) {
            printf("Charaters at index %d: %c (Address: %p)\n", j, names[i][j], &names[i][j]);
        }
        printf("\n");
    }

    return 0;
}