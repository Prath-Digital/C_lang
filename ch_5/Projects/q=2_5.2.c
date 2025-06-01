#include <stdio.h>

int main()
{
    int a, b, c, d, max_val;
    char max;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("Enter the value of d: ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                max = 'a';
                max_val = a;
            }
            else
            {
                max = 'd';
                max_val = d;
            }
        }
        else
        {
            if (c > d)
            {
                max = 'c';
                max_val = c;
            }
            else
            {
                max = 'd';
                max_val = d;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                max = 'b';
                max_val = b;
            }
            else
            {
                max = 'd';
                max_val = d;
            }
        }
        else
        {
            if (c > d)
            {
                max = 'c';
                max_val = c;
            }
            else
            {
                max = 'd';
                max_val = d;
            }
        }
    }

    printf("%c is the max value of %d\n", max, max_val);

    return 0;
}
