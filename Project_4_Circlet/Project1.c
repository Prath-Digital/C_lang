#include <stdio.h>

/*
    41
    41 42
    41 42 43
    41 42 43 44
    41 42 43 44 45
*/

int main()
{
    int start, rows;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", start + j);
        }
        printf("\n");
    }

    return 0;
}
