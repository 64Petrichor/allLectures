#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *str = "123";

    double dble = atof(str);
    int ingr = atoi(str);
    long lng = atol(str);
    char *endptr;
    double dble2 = strtod(str, &endptr);
    long lng2 = strtol(str, &endptr, 10);

    printf("%f\n%d\n%ld\n%f\n%ld\n", dble, ingr, lng, dble2, lng2);




    char str1[20] = "burger";
    char str2[20] = "abcdef";
    char str3[20] = "uncopied";
    char str4[20] = "abcdef";

    printf("%s\n", strcat(str1, "cheese"));         // Concatenate "cheese" to "burger"
    printf("%s\n", strncat(str2, "uvwxyz", 3));     // Concatenate first 3 characters of "uvwxyz" to "abcdef"
    printf("%s\n", strcpy(str3, "copied"));         // Copy "copied" into "uncopied"
    printf("%s\n", strncpy(str4, "uvwxyz", 3));






    //ovb, using a set size for the arrays is annoying, so there's another way to do it with malloc
    char *malstr1 = malloc(20);
    if (malstr1 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr1, "cheese");
    strcat(malstr1, "burger");

    char *malstr2 = malloc(20);
    if (malstr2 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr2, "abcdef");
    strncat(malstr2, "uvwxyz", 3);

    char *malstr3 = malloc(20);
    if (malstr3 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr3, "uncpoied");
    strcpy(malstr3, "copied");

    char *malstr4 = malloc(20);
    if (malstr4 == NULL) {printf("memory allocation failed"); return 1;}
    strcpy(malstr4, "abcdef");
    strncpy(malstr4, "uvwxyz", 4);

    printf("\n%s\n%s\n%s\n%s\n", malstr1, malstr2, malstr3, malstr4);
    return 0;
}