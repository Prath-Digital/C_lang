#include <stdio.h>

// Create a menu-driven fastfood order system

int main()
{
    int order, type;

    printf("Press 1 for Sandwitch\n");
    printf("Press 2 for Pizza\n");
    printf("Press 3 for Burger\n\n");

    printf("Enter your choice: ");
    scanf("%d", &order);

    switch (order)
    {
    case 1:
        printf("Press 1 for Cheese Sandwich\n");
        printf("Press 2 for Gril Sandwich\n");
        printf("Press 3 for Our Special Sandwich\n\n");

        printf("Enter your choice: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("You ordered Cheese Sandwich\n");
            break;
        case 2:
            printf("You ordered Gril Sandwich\n");
            break;
        case 3:
            printf("You ordered Our Special Sandwich\n");
            break;

        default:
            printf("Invalid choice...");
            break;
        }
        break;
    case 2:
        printf("Press 1 for Cheese Pizza\n");
        printf("Press 2 for Pineapple Pizza\n");
        printf("Press 3 for Our Special Pizza\n\n");

        printf("Enter your choice: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("You ordered Cheese Pizza\n");
            break;
        case 2:
            printf("You ordered Pineapple Pizza\n");
            break;
        case 3:
            printf("You ordered Our Special Pizza\n");
            break;

        default:
            printf("Invalid choice...");
            break;
        }

        break;
    case 3:
        printf("Press 1 for Cheese Burger\n");
        printf("Press 2 for Big 3x Burger\n");
        printf("Press 3 for Our Special Burger\n\n");

        printf("Enter your choice: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("You ordered Cheese Burger\n");
            break;
        case 2:
            printf("You ordered Big 3x Burger\n");
            break;
        case 3:
            printf("You ordered Our Special Burger\n");
            break;

        default:
            printf("Invalid choice...");
            break;
        }

        break;

    default:
        printf("Invalid choice...");
        break;
    }

    return 0;
}
