#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", first);
        } else if (i == 1) {
            printf(", %d", second);
        } else {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
    return 0;
}
