#include <stdio.h>

int main()
{
    int s, sum = 0;

    printf("Enter array length: ");
    scanf("%d", &s);

    printf("\n\n");

    int a[s];
    int i = 0;

    while (i < s)
    {
        printf("Enter array element at %d index: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
        i++;
    }

    printf("\n\n=====================================================================\n\n");

    printf("\nResult:\n");

    i = 0;
    while (i < s)
    {
        printf("%d, ", a[i]);
        i++;
    }
    printf("\n");

    float average = (float)sum / s;

    printf("The average size of array is %.2f", average);

    printf("\n");

    return 0;
}