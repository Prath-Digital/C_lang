#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, a, b, result;

    while (1)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            result = add(a, b);
            printf("Addition of %d and %d is %d\n", a, b, result);
            break;
        case 2:
            result = subtract(a, b);
            printf("Subtraction of %d and %d is %d\n", a, b, result);
            break;
        case 3:
            result = multiply(a, b);
            printf("Multiplication of %d and %d is %d\n", a, b, result);
            break;
        case 4:
            if (b != 0)
            {
                result = divide(a, b);
                printf("Division of %d and %d is %d\n", a, b, result);
            }
            else
            {
                printf("Division by zero is not allowed\n");
            }
            break;
        case 5:
            if (b != 0)
            {
                result = modulus(a, b);
                printf("Modulus of %d and %d is %d\n", a, b, result);
            }
            else
            {
                printf("Modulus by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
