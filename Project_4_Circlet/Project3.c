#include <stdio.h>



int main()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            printf("  ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
