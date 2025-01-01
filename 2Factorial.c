#include <stdio.h>

int fein (int n) {
    if (n <= 1) return 1;
    return n * fein(n-1); 
} //if n = 3, fein(3) = 3 * fein(2) = 3 * 2 * fein(1) = 3 * 2 * 1 = 6

int feinloop (int n) {
    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac = fac * i;
    }
    return fac;
}

int main () {
    int n = 5;
    printf("the factorial of %d is %d\n", n, fein(n));
    printf("the factorial of %d is %d\n", n, feinloop(n));
    return 0;
}