#include <stdio.h>

int zerosq (int n) {
    if (n%10 != 0) { //last digit isn't zero
        zerosq(n/10);
    }
    else if (n == n%10 && n != 0) { //last digit isn't zero and one digit left
        printf("no zeros here\n");
        return 0;
    }
    else { //last digit is zero
        printf("zeros here!!\n");
        return 1;
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
    int n = 1738;
    zerosq(n);
    loopzerosq(n);
    return 0;
} 
// ljk(bean) ? "true" : "false";