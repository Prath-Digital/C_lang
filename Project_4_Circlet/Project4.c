#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i * 2; s++)
        {
            printf(" ");
        }

        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", j % 2 == 0 ? 1 : 0);
        }

        printf("\n");
    }

    return 0;
}
