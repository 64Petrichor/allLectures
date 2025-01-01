#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *str = "123";

    double dble = atof(str); // atof returns string to double
    int ingr = atoi(str); // atoi returns string to int
    long lng = atol(str); // atol returns string to long
    char *endptr;
    double dble2 = strtod(str, &endptr);  // strtod returns the number in the string as a double, and places any leftover letters in endptr 
    long lng2 = strtol(str, &endptr, 10); // strtol returns the number in the string as a long, and places any leftover letters in endptr
    //example for strtod: strtod("123.56adtr",&endptr)    returns double 123.56 , endptr = "adtr"

    printf("%f\n%d\n%ld\n%f\n%ld\n\n", dble, ingr, lng, dble2, lng2);




    char str1[20] = "burger";
    char str2[20] = "abcdef";
    char str3[20] = "uncopied";
    char str4[20] = "abcdef";

    printf("%s\n", strcat(str1, "cheese"));         // Concatenate "cheese" to "burger"
    printf("%s\n", strncat(str2, "uvwxyz", 3));     // Concatenate first 3 characters of "uvwxyz" to "abcdef"
    printf("%s\n", strcpy(str3, "copied"));         // Copy "copied" into "uncopied"
    printf("%s\n\n", strncpy(str4, "uvwxyz", 3));   // replaces the first 3 charaters of "abcdef" with the first 3 of "uvwxyz"




    //ovb, using a set size for the arrays is annoying, so there's another way to do it with malloc
    int n = 20;
    char *malstr1 = malloc(sizeof(char) * n);
    if (malstr1 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr1, "cheese");
    strcat(malstr1, "burger");

    char *malstr2 = malloc(sizeof(char) * n);
    if (malstr2 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr2, "abcdef");
    strncat(malstr2, "uvwxyz", 3);

    char *malstr3 = malloc(sizeof(char) * n);
    if (malstr3 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr3, "uncpoied");
    strcpy(malstr3, "copied");

    char *malstr4 = malloc(sizeof(char) * n);
    if (malstr4 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr4, "abcdef");
    strncpy(malstr4, "uvwxyz", 4);

    printf("\n%s\n%s\n%s\n%s\n", malstr1, malstr2, malstr3, malstr4);
    return 0;
}