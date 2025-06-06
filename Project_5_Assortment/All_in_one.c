#include <stdio.h>

int main()
{
    int choice;
    do {
        printf("Choose array type:\n");
        printf("1. 1D Array\n");
        printf("2. 2D Array\n");
        printf("Enter your choice (1-2, 0 to exit): ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int size, i;
            printf("Enter the array's size: ");
            scanf("%d", &size);
            int a[size];

            printf("Enter array's elements:\n");
            for (i = 0; i < size; i++)
            {
                printf("a[%d] = ", i);
                scanf("%d", &a[i]);
            }

            printf("Menu:\n");
            printf("1. Find negative elements in 1D array\n");
            printf("Enter your choice (1): ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Negative elements from the Array: ");
                for (i = 0; i < size; i++)
                {
                    if (a[i] < 0)
                    {
                        printf("%d ", a[i]);
                    }
                }
                printf("\n");
                break;

            default:
                printf("Invalid choice.\n");
            }
        }
        else if (choice == 2)
        {
            int row, col, i, j;
            printf("Enter the array's row size: ");
            scanf("%d", &row);
            printf("Enter the array's column size: ");
            scanf("%d", &col);

            int a[row][col];
            printf("Enter array's elements:\n");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    printf("a[%d][%d] = ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("Menu:\n");
            printf("1. Find largest element in 2D array\n");
            printf("2. Find transpose of a 2D array\n");
            printf("3. Print and sum a specific row & column from 2D array\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
            {
                int max = a[0][0];
                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                    {
                        if (a[i][j] > max)
                        {
                            max = a[i][j];
                        }
                    }
                }

                printf("The largest element is: %d\n", max);
                break;
            }

            case 2:
            {
                int transpose[col][row];
                for (i = 0; i < row; i++) {
                    for (j = 0; j < col; j++) {
                        transpose[j][i] = a[i][j];
                    }
                }

                printf("The transpose matrix of the array:\n");
                for (i = 0; i < col; i++) {
                    for (j = 0; j < row; j++) {
                        printf("%d ", transpose[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3:
            {
                int r, c, rowSum = 0, colSum = 0;
                printf("Enter row number (0 to %d): ", row - 1);
                scanf("%d", &r);
                if (r >= 0 && r < row)
                {
                    printf("Elements of row %d: ", r);
                    for (j = 0; j < col; j++)
                    {
                        printf("%d ", a[r][j]);
                        rowSum += a[r][j];
                    }
                    printf("\nThe sum of row %d: %d\n", r, rowSum);
                }
                else
                {
                    printf("Invalid row number.\n");
                }

                printf("Enter column number (0 to %d): ", col - 1);
                scanf("%d", &c);
                if (c >= 0 && c < col)
                {
                    printf("Elements of column %d: ", c);
                    for (i = 0; i < row; i++)
                    {
                        printf("%d ", a[i][c]);
                        colSum += a[i][c];
                    }
                    printf("\nThe sum of column %d: %d\n", c, colSum);
                }
                else
                {
                    printf("Invalid column number.\n");
                }
                break;
            }

            default:
                printf("Invalid choice.\n");
            }
        }
        else if (choice != 0)
        {
            printf("Invalid array type choice.\n");
        }

    } while (choice != 0);

    return 0;
}
