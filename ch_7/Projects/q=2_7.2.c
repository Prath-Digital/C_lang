#include <stdio.h>

/*
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
*/

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf("  ");
        }
        for (int num = n - i + 1; num <= n; num++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
