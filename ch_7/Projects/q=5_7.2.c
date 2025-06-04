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
    int n, i, j, k;
    printf("Enter the starting number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (k = n - i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
