#include <stdio.h>

/*
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
*/

int main()
{
    int i, j, k, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
