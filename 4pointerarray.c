#include <stdio.h>
#include <string.h>

int main () {
    int n1 = 10, n2 = 20, n3 = 30;
    int *ptrarr[] = {&n1, &n2, &n3};
    for (int i = 0; i < 3; i++) {
        printf("Value of n%d: %d\tAddress: %p\n", i+1, *(ptrarr[i]), ptrarr[i]);
    }

    
    
    char *ptrarr2[] = {"Shrek", "Pooh", "Donald Duck", "Mickey Mouse"};
    for (int i = 0; i < 4; i++) {
        printf("string: %s\t length: %zu\t address: %p\n", ptrarr2[i], strlen(ptrarr2[i]), ptrarr2[i]);
    }

    return 0;
}