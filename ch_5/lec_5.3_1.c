#include <stdio.h>

// Find the maximum from two numbers

void main()
{
    int a, b;

    printf("enter value of a: ");
    scanf("%d", &a);

    printf("enter value of b: ");
    scanf("%d", &b);

    (a > b) ? printf("a is the maximum value") : printf("b is the maximum value");
}