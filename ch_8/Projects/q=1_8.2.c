#include <stdio.h>

int main()
{
    int size_a, size_b, size_c;
    int i = 0;

    printf("Enter array size of a: ");
    scanf("%d", &size_a);
    int a[size_a];

    for (i = 0; i < size_a; i++)
    {
        printf("Enter element of a at %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    printf("Enter array size of b: ");
    scanf("%d", &size_b);
    int b[size_b];

    for (i = 0; i < size_b; i++)
    {
        printf("Enter element of b at %d: ", i);
        scanf("%d", &b[i]);
    }

    size_c = size_a + size_b;
    int c[size_c];

    for (i = 0; i < size_a; i++)
    {
        c[i] = a[i];
    }

    for (i = 0; i < size_b; i++)
    {
        c[size_a + i] = b[i];
    }

    printf("\n\n=========================================================\n\n");

    printf("Result of array c: ");
    for (i = 0; i < size_c; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
