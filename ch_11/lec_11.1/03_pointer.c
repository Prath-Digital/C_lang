#include <stdio.h>

// Pointer with arrays

void adress(int *p, int size);
void elements(int *p, int size);

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    int *p;
    int i;

    p = a;

    elements(p, size);
    adress(p, size);

    return 0;
}

void adress(int *p, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%u => %d\n", p + i, *(p + i));
    }
}
void elements(int *p, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter a integer: ");
        scanf(" %d", p + i);
    }
}