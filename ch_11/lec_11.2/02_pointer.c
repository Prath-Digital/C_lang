#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int *p1[size];
    for (int i = 0; i < size; i++)
    {
        p1[i] = &a[i];
    }

    int **p2 = p1;
    int ***p3 = &p2;

    printf("\nContents of a (array):\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d, Address: %u\n", i, a[i], (void *)&a[i]);
    }

    printf("\nContents of p1 (array of pointers):\n");
    for (int i = 0; i < size; i++)
    {
        printf("p1[%d] points to address %u, value = %d\n", i, (void *)p1[i], *p1[i]);
    }

    printf("\nContents via p2 (pointer to pointer):\n");
    for (int i = 0; i < size; i++)
    {
        printf("p2[%d] points to address %u, value = %d\n", i, (void *)p2[i], *p2[i]);
    }

    printf("\nUsing p3 (pointer to pointer to pointer):\n");
    for (int i = 0; i < size; i++)
    {
        printf("(*p3)[%d] points to address %u, value = %d\n", i, (void *)(*p3)[i], *(*p3)[i]);
    }

    printf("\nTotal size of a: %zu bytes\n", sizeof(a));

    return 0;
}
