#include <stdio.h>

int main()
{
    int s, s2 = 0;

    printf("Enter array length: ");
    scanf("%d", &s);

    printf("\n\n");

    int a[s];
    int i = 0;

    while (i < s)
    {
        printf("Enter array element at %d index: ", i);
        scanf("%d", &a[i]);
        i++;
        s2++;
    }
    
    printf("\n\n=====================================================================\n\n");
    
    printf("\nResult:\n");
    
    while (i < s)
    {
        printf("%d, ", a[i]);
        i++;
    }
    printf("\n");

    printf("The size of array is %d", s2);

    printf("\n");

    return 0;
}