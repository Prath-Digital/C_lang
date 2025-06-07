#include <stdio.h>

int findLength(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void findCubes(int *arr, int size)
{
    int *ptr = arr;
    printf("Cubes of all elements:\n");
    for (int i = 0; i < size * size; i++)
    {
        printf("%d ", (*ptr) * (*ptr) * (*ptr));
        ptr++;
        if (i % size == size - 1)
            printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n0. Exit\n");
        printf("1. Find length of a string\n");
        printf("2. Find cubes of 2D array elements\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 0)
            break;

        switch (choice)
        {
        case 1:
        {
            char str[1000];
            printf("Enter any string: ");
            fgets(str, sizeof(str), stdin);
            int i = 0;
            while (str[i] != '\n' && str[i] != '\0')
                i++;
            str[i] = '\0';
            printf("The length of the string is: %d\n", findLength(str));
            break;
        }
        case 2:
        {
            int size;
            printf("Enter 2D array's row and colunm size: ");
            scanf("%d", &size);
            int arr[size][size];
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    printf("a[%d][%d] = ", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
            findCubes((int *)arr, size);
            break;
        }
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
