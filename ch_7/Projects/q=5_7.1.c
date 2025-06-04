#include <stdio.h>

/*
    1 1 1 1 1 
    2 2 2 2
    3 3 3
    4 4
    5
*/

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
