#include <stdio.h>

/*
    A
    B A
    C B A
    D C B A
    E D C B A
*/

int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
