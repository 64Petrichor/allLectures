#include <stdio.h>
#include <stdlib.h>

int fibb(int n) {
    if (n <= 1) return n;
    else return fibb(n - 1) + fibb(n - 2);
}

int loopfibb(int n) {
    int * arr = (int *) calloc(n, sizeof(int));
    arr[0] = 0;
    arr[1] = 1;
    printf("0 1 ");
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibb(i));
    }

    printf("\nFibonacci Sequence: ");
    loopfibb(n);

    return 0;
}