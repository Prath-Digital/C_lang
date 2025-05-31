#include <stdio.h>

void main()
{
    double a, b, c;

    printf("Enter value of a: ");
    scanf("%lf", &a);

    printf("Enter value of b: ");
    scanf("%lf", &b);

    printf("Enter value of c: ");
    scanf("%lf", &c);

    if (a == b && b == c)
    {
        printf("All values are equal. A, B, and C are the minimum value: %.2lf\n", a);
    }
    else
    {
        double min;

        if (a <= b && a <= c)
            min = a;
        else if (b <= a && b <= c)
            min = b;
        else
            min = c;

        int isAmin = (a == min);
        int isBmin = (b == min);
        int isCmin = (c == min);

        printf("Minimum value: %.2lf\n", min);
        if (isAmin && isBmin && isCmin)
        {
            printf("A, B, and C are the minimum.\n");
        }
        else if (isAmin && isBmin)
        {
            printf("A and B are the minimum.\n");
        }
        else if (isAmin && isCmin)
        {
            printf("A and C are the minimum.\n");
        }
        else if (isBmin && isCmin)
        {
            printf("B and C are the minimum.\n");
        }
        else if (isAmin)
        {
            printf("A is the minimum value.\n");
        }
        else if (isBmin)
        {
            printf("B is the minimum value.\n");
        }
        else if (isCmin)
        {
            printf("C is the minimum value.\n");
        }
    }
}