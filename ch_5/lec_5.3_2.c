#include <stdio.h>

// Find the maximum from three numbers

void main()
{
    int a, b, c;

    printf("enter value of a: ");
    scanf("%d", &a);

    printf("enter value of b: ");
    scanf("%d", &b);

    printf("enter value of c: ");
    scanf("%d", &c);

    if (a == b && b == c && c == a)
    {
        printf("All values are same\n");
    }
    else
    {
        if (a == b)
        {
            printf("a and b are same\n");
        }
        else if (b == c)
        {
            printf("b and c are same\n");
        }
        else if (c == a)
        {
            printf("c and a are same\n");
        }
        else
        {
            (a > b)
                ? (a > c)
                      ? printf("a is the maximum value")
                      : printf("c is the maximum value")
            : (b > c)
                ? printf("b is the maximum value")
                : printf("c is the maximum value");
        }
    }
}