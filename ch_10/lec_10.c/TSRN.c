#include <stdio.h>

// Create a UDF which prints the sum of two numbers

// Take Something
// Return Nothing

void sum(int a, int b);

void main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    sum(a, b);
}

void sum(int a, int b)
{
    int result = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, result);
}