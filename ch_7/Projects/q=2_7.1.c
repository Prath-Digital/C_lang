#include <stdio.h>

/*
    5 
    4 5
    3 4 5
    2 3 4 5
*/

int main()
{
    int rows;

    printf("Enter any number: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--)
    {
        for (int j = i; j <= rows; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
