#include <stdio.h>

int sumall (int n) {
    if (n == 1) return 1;
    return n + sumall(n-1);
}

int main () {
    int n = 5;
    printf("the sum of all numbers before %d is %d\n", n, sumall(n));
    return 0;
}