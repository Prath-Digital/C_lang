#include <stdio.h>

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1
*/

int main()
{
    int n, i, j, k, l;

    printf("Enter the number of rows (e.g., 5): ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <=  i; j++)
        {
            printf("%d ", j);
        }

        for (k = i; k < n; k++)
        {
            printf("  ");
        }
        for (k = i; k < n; k++)
        {
            printf("  ");
        }

        if (i != 0)
        {
            for (l = i; l >= 1; l--)
            {
                printf("%d ", l);
            }
        }
        else
        {
            for (l = n; l >= 1; l--)
            {
                printf("%d ", l);
            }
        }

        printf("\n");
    }

    return 0;
}
