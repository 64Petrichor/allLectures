#include <stdio.h>

int zerosq (int n) {
    if (n == 0) {
        printf("no zeros here\n");
        return 0;
    }
    else if (n%10 == 0 && n != 0) {
        printf("zeros here\n");
        return 1;
    }
    else if (n%10 != 0) zerosq(n/10); //last digit isn't zero, but there's more digits
}

int loopzerosq (int n) {
    while (n != 0) {
        if (n%10==0) {
            printf("there's zeros buddy\n");
            return 1;
        }
        else n=n/10;
    }
    printf("there's no zeros man\n");
    return 0;
}

int main () { // 1023 1110 7865
    int arr[4] = {17031, 1023, 1110, 7865};
    for (int i = 0; i < 4; i++) {
        printf("recursive function (%d): ", arr[i]);
        zerosq(arr[i]);
        printf("looped function (%d): ", arr[i]);
        loopzerosq(arr[i]);
        printf("\n");
    }
    return 0;
} 