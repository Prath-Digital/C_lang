#include <stdio.h>

int main()
{
    int s;

    printf("Enter array length: ");
    scanf("%d", &s);

    printf("\n\n");

    int a[s];
    int b[s];
    int c[s];
    int i = 0;
    
    while (i < s)
    {
        printf("Enter array element of a at %d index: ", i);
        scanf("%d", &a[i]);
        i++;
    }

    printf("\n");
    
    i = 0;

    while (i < s)
    {
        printf("Enter array element of b at %d index: ", i);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
        i++;
    }
    printf("\n\n=====================================================================\n\n");

    printf("\nResult:\n");

    i = 0;
    while (i < s)
    {
        printf("%d, ", c[i]);
        i++;
    }
    printf("\n");

    return 0;
}