#include<stdio.h>

int sum(int p, int q);
int addition(int *p, int *q);

void main()
{
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nThe sum of a(%d) and b(%d) is %d", a, b, sum(a, b));

    printf("\nThe sum of a(%d) and b(%d) is %d", a, b, addition(&a, &b));
}

int sum(int p, int q)
{
    return p + q;
}

int addition(int *p, int *q)
{
    return *p + *q;
}
