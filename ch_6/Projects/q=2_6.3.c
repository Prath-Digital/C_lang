#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of all numbers from 1 to %d is: %d\n", n, factorial);

    return 0;
}
