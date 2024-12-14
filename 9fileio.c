#include <stdio.h>

int main () {
    FILE* fptr1;
    int a,b;
    fptr1 = fopen("mydata.txt", "r");
    if (fptr1 == NULL) printf("File 'mydata.txt' did not open\n");
    
    while (1) {
        if (feof(fptr1)) printf("EOF reached\n");
        fscanf(fptr1, "%d", &a);
        printf("Read value: %d\n", a);
    }
    fclose(fptr1);
    

}