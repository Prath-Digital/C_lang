#include <stdio.h>

// Find the factorial of a number using Recursion

int factorial(int n);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of %d is 1.\n", number);
    } else if (number == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        printf("Factorial of %d is %d\n", number, factorial(number));
    }

    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
