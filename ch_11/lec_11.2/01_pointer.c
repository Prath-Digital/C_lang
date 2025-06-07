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

    for (i = 0; i < size; i++)
    {
        printf("%zu => %u => %d\n", sizeof(a[i]),  p[i], *p[i]);
    }

    printf("\n");

    printf("The total size of array is %zu\n", sizeof(a));
}