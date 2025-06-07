#include <stdio.h>

int main()
{
    int size, i, max;

    printf("Enter Array size: ");
    scanf("%d", &size);

    if (size < 0)
    {
        printf("Invalid size...\n");
        return 1;
    }

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter array element at index %d: ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }
    printf("Max element is %d", max);

    return 0;
}
