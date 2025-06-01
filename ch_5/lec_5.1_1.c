#include <stdio.h>

void main()
{
    int a, b;

    printf("enter value of a: ");
    scanf("%d", &a);
    
    printf("enter value of b: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a is big\n");
    }
    else
    {
        printf("b is big\n");
    }
    
}