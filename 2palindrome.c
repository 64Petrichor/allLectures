#include <stdio.h>
#include <string.h>

int loopalindrome (char *str) {
    int n = strlen(str);
    for (int i = 0; i < (n/2); i++) {
        if (str[i] != str[n-i-1]) return 0;
    }
    return 1;
}

int palindrome (char *str, int n, int ori) {
    if (ori-n >= n) return 1;
    else if (str[ori-n] == str[n]) palindrome(str, --n, ori);
    else return 0;
}

int main () {
    char *n = "cheese"; //cheese, racecar
    loopalindrome(n) ? printf("is palindrome\n") : printf("not palindrome\n");
    palindrome(n, strlen(n)-1, strlen(n)-1) ? printf("is palindrome") : printf("not palindrome");
    return 0;
}