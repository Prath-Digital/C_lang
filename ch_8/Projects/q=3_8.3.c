#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i][n - 1 - i];
    }
    printf("result:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of diagonal elements of an Array: %d\n", sum);

    printf("Matrix Result:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
