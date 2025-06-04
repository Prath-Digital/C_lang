#include <stdio.h>

/*
    1 2 3 4 5 
    2 3 4 5
    3 4 5
    4 5
    5
*/

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
