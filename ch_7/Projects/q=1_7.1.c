#include <stdio.h>

/*
    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
*/

int main()
{
    int rows;

    printf("Enter any number: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
