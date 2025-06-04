#include <stdio.h>

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/

int main()
{
    int n, i, j, space;

    printf("Enter the number of rows (e.g., 5): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }

        space = i * 2 - 1;
        for (j = 0; j < space; j++)
        {
            printf("  ");
        }

        if (i != 0)
        {
            for (j = n - i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = n; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    for (i = n - 1; i >= 0; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }

        space = i * 2 - 1;
        for (j = 0; j < space; j++)
        {
            printf("  ");
        }

        if (i != 0)
        {
            for (j = n - i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = n; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
