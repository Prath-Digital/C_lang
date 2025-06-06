#include <stdio.h>

// Convert a given letter into uppercase

// N - 32  =>  Capital letter
// N + 32  =>  Small letter

int main() {
    char lower = 'z';
    char upper = lower - 32;

    printf("Lowercase: %c\n", lower);
    printf("Uppercase: %c\n", upper);

    return 0;
}