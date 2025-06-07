#include <stdio.h>

void main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    int i;

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int *p[size];

    for (i = 0; i < size; i++)
    {
        p[i] = &a[i];
    }

    printf("\nReversed array elements of square:\n");

    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", ((*p[i]) * (*p[i])));
    }
}