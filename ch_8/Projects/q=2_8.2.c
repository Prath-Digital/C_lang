#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the first number: ");
    scanf("%d", &start);
    printf("Enter the second number: ");
    scanf("%d", &end);

    printf("The leap years are: ");
    int first = 1;
    for (int year = start; year <= end; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (!first) {
                printf(", ");
            }
            printf("%d", year);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}