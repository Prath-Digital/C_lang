#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            printf("  ");
        }

        int start = (i == n) ? 1 : n - i + 1;
        for (int j = start; j <= n; j++)
        {
            printf("%d ", j);
        }

        for (int j = n - 1; j >= start; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}