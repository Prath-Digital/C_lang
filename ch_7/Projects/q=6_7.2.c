#include <stdio.h>

/*
5 4 3 2 1
  5 4 3 2
    5 4 3
      5 4
        5
*/

int main()
{
    int i, j, k, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = 5; k > i; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
