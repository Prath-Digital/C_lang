#include <stdio.h>

void main()
{
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    (num % 2 == 0)
        ? printf("%d is an even number", num)
        : printf("%d is a odd number", num);
}
