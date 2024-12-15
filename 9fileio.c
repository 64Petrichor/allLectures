#include <stdio.h>

int main () {
    //There a 2 methods to print a file of numbers seperated by spaces
    //method 1
    FILE* fptr1;
    int a;
    fptr1 = fopen("mydata.txt", "r");
    if (fptr1 == NULL) printf("File 'mydata.txt' did not open\n");
    while (1) {
        if (feof(fptr1)) printf("EOF reached\n");
        fscanf(fptr1, "%d", &a);
        printf("Read value: %d\n", a);
    }
    fclose(fptr1);
    

    //method 2
    FILE* fptr2;
    int b;
    fptr2 = fopen("mydata.txt", "r");
    if (fptr2 == NULL) printf("File 'mydata.txt' did not open\n");
    while (fscanf(fptr2, "%d", &b) == 1) {
        printf("Read value: %d\n", b);
    }
    fclose(fptr2);

    //if there is newlines and spaces, and you want to retain the formats: 
    
    //method 1
    FILE* fptr3;
    char line[100];
    fptr3 = fopen("../Letters.txt", "r");
    if (fptr3 == NULL) printf("File 'Letters.txt' did not open\n");
    while (fscanf(fptr3, "%[^\n]%c", line) == 1) {
        printf("%s\n", line);
    }
    fclose(fptr3);

    //method 2
    FILE* fptr4;
    char line[100];
    fptr4 = fopen("../Letters.txt", "r");
    if (fptr4 == NULL) printf("File 'Letters.txt' did not open\n");
    while (fget(line, sizeof(line), fptr4) != NULL) {
        printf("%s", line);
    }
    fclose(fptr4);

    //write stuff in a file
    FILE *fptr5;
    char text[] = "Hello, World!";
    fptr5 = fopen("../FileHello.txt", "w");
    if (fptr5 == NULL) printf("Unable to open the file.\n");
    fprintf(fptr5, "%s", text);
    fclose (fptr5);
    
    //note, ftell(fptr), returns curret position in the file
    /*
    note, fseek(fptr, offset, initial pos)
    if initial = 0, start of file
    if initial = 1, current pos
    if initial = 2, end of file
    • fseek (fp, 0, 2);     fp moved 0 bytes forward from the end of the file.
    • fseek (fp, 0, 0);     fp moved 0 bytes forward from beginning of the file
    • fseek (fp, m, 0);     fp moved m bytes forward from the beginning of the file.
    • fseek (fp,-m, 2);     fp moved m bytes backward from the end of the file.
    • fseek (fp,-m, 0);     UNSUCCESSFUL
    • fseek (fp, m, 2);     UNSUCCESSFUL
    */
    return 0;
}