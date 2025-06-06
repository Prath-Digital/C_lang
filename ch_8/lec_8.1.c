#include <stdio.h>

// create 1D Array

int main()
{
    int size;

    printf("Enter array length: ");
    scanf("%d", &size);

    printf("\n\n");

    int a[size];
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter array element at %d index: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\n\n=====================================================================\n\n");
    
    printf("\nResult:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n"); 

    return 0;
}