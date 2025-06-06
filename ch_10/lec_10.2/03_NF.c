#include <stdio.h>
#include <string.h>

// Create a UDF Nested Function using switch in which you can pass multiple names until you enter 0

void processName(char name[]) {
    printf("You entered: %s\n", name);
}

void printAllNames(char names[][50], int count) {
    printf("\nAll entered names:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }
}

void getNames() {
    char names[100][50];
    int nameCount = 0;
    char name[50];
    int continueInput = 1;

    while (continueInput) {
        printf("Enter a name (or 0 to stop): ");
        scanf("%s", name);

        if (strcmp(name, "0") == 0) {
            break;
        }

        strcpy(names[nameCount], name);
        nameCount++;

        processName(name);

        int choice;
        printf("Do you want to:\n1. Enter another name\n2. Print all names\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                continueInput = 1;
                break;
            case 2:
                printAllNames(names, nameCount);
                break;
            case 0:
                continueInput = 0;
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Exiting by default.\n");
                continueInput = 0;
                break;
        }
    }
}

int main() {
    getNames();
    return 0;
}
