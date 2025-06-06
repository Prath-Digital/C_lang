#include <stdio.h>
#include <string.h>

// Write a program to unlock a reward based on authentication.


int main() {
    printf ("Enter the secret code: ");
    char code[50];
    scanf("%s", code);

    if (strcmp(code, "Prath-code") == 0) {
        printf("Access granted. Reward unlocked!\n");
    } else {
        printf("Access denied. Incorrect code.\n");
    }

    return 0;
}
