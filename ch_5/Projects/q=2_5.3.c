#include <stdio.h>

// Create a menu-driven telecon call service

int main()
{
    int language, type;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n\n");

    printf("Enter your choice: ");
    scanf("%d", &language);

    switch (language)
    {
    case 1:
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n\n");

        printf("Enter your choice: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("You have successfully done a Internet Recharge\n");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge\n");
            break;
        case 3:
            printf("You have successfully done a Special Recharge\n");
            break;

        default:
            printf("Invalid choice...");
            break;
        }
        break;
    case 2:
        printf("Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Vishesh Recharge ke liye 3 dabaiye\n\n");

        printf("Apna chayan karen: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("Aapne safaltapurvak ek Internet Recharge kiya hai\n");
            break;
        case 2:
            printf("Aapne safaltapurvak ek Top-up Recharge kiya hai\n");
            break;
        case 3:
            printf("Aapne safaltapurvak ek Vishesh Recharge kiya hai\n");
            break;

        default:
            printf("Avaidh chayan...");
            break;
        }

        break;
    case 3:
        printf("Internet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Vishesh Recharge mate 3 dabavo\n\n");

        printf("Tamaro choice dakhal karo: ");
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            printf("Tame saphalatapurvak Internet Recharge karyu che\n");
            break;
        case 2:
            printf("Tame saphalatapurvak Top-up Recharge karyu che\n");
            break;
        case 3:
            printf("Tame saphalatapurvak Vishesh Recharge karyu che\n");
            break;

        default:
            printf("Avaid choice...");
            break;
        }

        break;

    default:
        printf("Invalid choice...");
        break;
    }

    return 0;
}
