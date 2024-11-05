#include <stdio.h>

int zerosq (int n) {
    if (n == n%10 && n != 0) { //last digit isn't zero and one digit left
        printf("no zeros here\n");
        return 0;
    }
    if (n%10 == 0) { 
        printf("zeros here\n");
        return 0;
    }
    else if (n%10 != 0) { //last digit isn't zero, but there's more digits
        zerosq(n/10);
    }
}

int loopzerosq (int n) {
    while (n != 0) {
        if (n%10==0) {
            printf("there's zeros buddy\n");
            return 0;
        }
        else {
            n=n/10;
        }
    }
    printf("there's no zeros man\n");
    return 0;
}

int main () {
    int n = 17380;
    zerosq(n);
    loopzerosq(n);
    return 0;
} 
// ljk(bean) ? "true" : "false";