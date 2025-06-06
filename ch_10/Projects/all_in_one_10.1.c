#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int isDivisibleBy3And5(int n)
{
    return (n % 3 == 0 && n % 5 == 0);
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int getValidInt(const char *prompt)
{
    int num;
    while (1)
    {
        printf("%s", prompt);
        if (scanf("%d", &num) == 1)
        {
            clearInputBuffer();
            return num;
        }
        else
        {
            printf("Invalid input. Please enter an integer.\n");
            clearInputBuffer();
        }
    }
}

int main()
{
    int choice, num;
    while (1)
    {
        printf("\n1. Find Cube\n");
        printf("2. Check Divisibility by 3 and 5\n");
        printf("0. Exit\n");
        choice = getValidInt("Enter your choice: ");

        if (choice == 0)
            break;

        switch (choice)
        {
        case 1:
            num = getValidInt("Enter any number: ");
            printf("Cube is: %d\n", cube(num));
            break;
        case 2:
            num = getValidInt("Enter any number: ");
            if (isDivisibleBy3And5(num))
            {
                printf("The given number is divisible by both 3 & 5.\n");
            }
            else
            {
                printf("The given number is not divisible by both 3 & 5.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select 0, 1, or 2.\n");
        }
    }
    return 0;
}
