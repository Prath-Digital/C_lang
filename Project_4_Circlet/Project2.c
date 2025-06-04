#include <stdio.h>

/*
    11
    12 13
    14 15 16
    17 18 19 20
    21 22 23 24 25
*/

int main()
{
    int rows, i, j;
    int num;
    
    printf("Enter the starting number: ");
    scanf("%d", &num);
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
