#include <stdio.h>

/*
    5 4 3 2 1 
      4 3 2 1
        3 2 1
          2 1
            1
*/

int main()
{
    int i, j, k, n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (k = 0; k < n - i; k++)
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
