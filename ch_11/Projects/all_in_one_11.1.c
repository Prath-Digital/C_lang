#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void displayMenu()
{
    printf("\n");
    printf("+-----------------------------------------+\n");
    printf("|              MAIN MENU                  |\n");
    printf("+-----------------------------------------+\n");
    printf("| 1. Square Each Element of an Array      |\n");
    printf("| 2. Swap Two Variables                   |\n");
    printf("| 0. Exit                                 |\n");
    printf("+-----------------------------------------+\n");
}

int getValidIntegerInput()
{
    char buffer[100];
    int value;

    while (1)
    {
        scanf("%s", buffer);
        char *endptr;
        value = strtol(buffer, &endptr, 10);

        if (*endptr == '\0')
        {
            return value;
        }
        else
        {
            printf("Invalid input. Please enter a valid integer: ");
        }
    }
}

int main()
{
    int choice;

    while (1)
    {
        displayMenu();
        printf("Enter your choice: ");
        choice = getValidIntegerInput();

        switch (choice)
        {
        case 1:
        {
            int i, size;
            printf("\nEnter the array's size: ");
            size = getValidIntegerInput();

            if (size <= 0)
            {
                printf("Invalid size. Try again.\n");
                break;
            }

            int a[size];
            int *ptr = a;

            printf("\nEnter array elements:\n");
            for (i = 0; i < size; i++)
            {
                printf("a[%d] = ", i);
                a[i] = getValidIntegerInput();
            }

            printf("\nSquare of each element:\n");
            for (i = 0; i < size; i++)
            {
                printf("%d", (*(ptr + i)) * (*(ptr + i)));
                if (i < size - 1)
                {
                    printf(", ");
                }
            }
            printf("\n");
            break;
        }

        case 2:
        {
            int x, y;
            printf("\nEnter the value of x: ");
            x = getValidIntegerInput();
            printf("Enter the value of y: ");
            y = getValidIntegerInput();

            printf("\nBefore swapping:\n");
            printf("x = %d\n", x);
            printf("y = %d\n", y);

            swap(&x, &y);

            printf("\nAfter swapping:\n");
            printf("x = %d\n", x);
            printf("y = %d\n", y);
            break;
        }

        case 0:
            printf("\nThank you for using the program. Goodbye!\n");
            return 0;

        default:
            printf("\nInvalid choice. Please enter 0, 1, or 2.\n");
        }
    }

    return 0;
}
