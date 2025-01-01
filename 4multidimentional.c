#include <stdio.h>
#include <string.h>

int main () {
    int x [2][2] = {5,4,3,2}, y[2][2] = {10,10,10,10}, size = 2, z[2][2];
    // an example of how to iterate through a multi-dimensional array using nested loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            z[j][i] = y[j][i] + x[j][i];
            printf("%d ", z[j][i]);
        }
        printf("\n");
    }



    char *names[] = {"Shrek", "Pooh", "Donald Duck", "Mickey Mouse"};

    for (int i = 0; i < 4; i++) {
        printf("String %d: %s and its length is %zu\n", i + 1, names[i], strlen(names[i])); // notice: strlen() returns size_t and not an int, that's why %zu is used
        printf("Address of %s = %p\n", names[i], names[i]); // %s will read the string at the address, and %p will look at the address
        
        printf("Individual charaters of the string: \n"); // since a char* can be treated as an array, and there is an array of char*, then you can treat it as a multidimentional and increment with i and j
        for (int j = 0; j < strlen(names[i]); j++) {
            printf("Charaters at index %d: %c (Address: %p)\n", j, names[i][j], &names[i][j]);
        }
        printf("\n");
    }

    return 0;
}