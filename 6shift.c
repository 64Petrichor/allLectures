#include <stdio.h>
#include <stdlib.h>

int main () {
    int x = (1) && (2);
    printf("The logical 'and' returns: %d\n", x);
    int y = (10) & (12); // 1010 & 1100
    printf("The bitwise 'and' returns: %d\n", y);//1010 & 1100 = 1000 = 8

    unsigned char a = 5, b = 5, c = 9, d = 9;
    printf("a<<1 = %d\n", a<<1); //101 -> 1010 = 10
    printf("a>>1 = %d\n", b>>1); //101 -> 10 = 2
    printf("b<<1 = %d\n", c<<1); //1001 -> 10010 = 18
    printf("b>>1 = %d\n", d>>1); //1001 -> 100 = 4
    return 0;
}