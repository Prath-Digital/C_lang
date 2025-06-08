#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void displayMenu()
{
    printf("\n+-----------------------------+\n");
    printf("|           MENU             |\n");
    printf("+-----------------------------+\n");
    printf("| 1. See Details             |\n");
    printf("| 2. Replace Details         |\n");
    printf("| 3. Add Details             |\n");
    printf("| 4. Delete Details          |\n");
    printf("| 0. Exit                    |\n");
    printf("+-----------------------------+\n");
    printf("Enter your choice: ");
}

void seeDetails()
{
    FILE *fp = fopen("01_data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char line[1024];
    printf("\n--- File Contents ---\n");
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }
    fclose(fp);
}

void replaceDetails()
{
    FILE *fp = fopen("01_data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char newDetails[1024];
    printf("Enter new details: ");
    getchar(); // Clear newline from buffer
    fgets(newDetails, sizeof(newDetails), stdin);
    newDetails[strcspn(newDetails, "\n")] = '\0';

    fputs(newDetails, fp);
    fputs("\n", fp);
    fclose(fp);
    printf("Details replaced successfully.\n");
}

void addDetails()
{
    FILE *fp = fopen("01_data.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char additionalDetails[1024];
    printf("Enter details to add: ");
    getchar(); // Clear newline from buffer
    fgets(additionalDetails, sizeof(additionalDetails), stdin);
    additionalDetails[strcspn(additionalDetails, "\n")] = '\0';

    fputs(additionalDetails, fp);
    fputs("\n", fp);
    fclose(fp);
    printf("Details added successfully.\n");
}

void deleteDetails()
{
    FILE *fp = fopen("01_data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char lines[100][1024];
    int count = 0;

    printf("\n--- File Contents ---\n");
    while (fgets(lines[count], sizeof(lines[count]), fp) != NULL)
    {
        printf("%d. %s", count + 1, lines[count]);
        count++;
    }
    fclose(fp);

    if (count == 0)
    {
        printf("The file is empty. Nothing to delete.\n");
        return;
    }

    int choice;
    printf("\nEnter the line number to delete (1-%d): ", count);
    scanf("%d", &choice);

    if (choice < 1 || choice > count)
    {
        printf("Invalid choice.\n");
        return;
    }

    fp = fopen("01_data.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        if (i != choice - 1)
        {
            fputs(lines[i], fp);
        }
    }
    fclose(fp);
    printf("Line %d deleted successfully.\n", choice);
}

void main()
{
    int choice;
    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            seeDetails();
            break;
        case 2:
            replaceDetails();
            break;
        case 3:
            addDetails();
            break;
        case 4:
            deleteDetails();
            break;
        case 0:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}