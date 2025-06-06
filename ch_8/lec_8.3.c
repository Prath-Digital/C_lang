#include <stdio.h>

int main()
{
    int row_size, colunm_size;

    printf("Enter number of rows: ");
    scanf("%d", &row_size);
    
    printf("Enter number of elements in each row: ");
    scanf("%d", &colunm_size);

    int a[row_size][colunm_size];

    int i, j;

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < colunm_size; j++)
        {
            printf("Enter element of %d at %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n=====================================================================\n\n");
    printf("Result:\n");

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < colunm_size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n=====================================================================\n\n");
    printf("Result in diagonal form(\\):\n");

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < colunm_size; j++)
        {
            if (i == j)
            {
                printf("%d  ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }

    printf("\n\n=====================================================================\n\n");
    printf("Result in Lower Triangular Matrix(L):\n");

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < colunm_size; j++)
        {
            if (j == 0 || i == row_size - 1)
            {
                printf("%d  ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}