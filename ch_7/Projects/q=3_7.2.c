#include <stdio.h>

/*
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/

int main()
{
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf("   ");
        }
        for (j = i; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
