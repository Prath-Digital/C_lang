#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyFileContent(const char *sourceFile, const char *destFile) {
    FILE *src = fopen(sourceFile, "r");
    FILE *dest = fopen(destFile, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File content copied from '%s' to '%s'.\n", sourceFile, destFile);

    fclose(src);
    fclose(dest);
}

void writeDivisibleBy3And5(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating file.\n");
        return;
    }

    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    printf("Numbers divisible by 3 and 5 written to '%s'.\n", filename);

    fclose(file);
}

int main() {
    int choice;
    char source[100], destination[100], numberFile[100];

    while (1) {
        printf("\n+-----------------------------+\n");
        printf("|           MENU              |\n");
        printf("+-----------------------------+\n");
        printf("| 1. Copy File Content        |\n");
        printf("| 2. Write Divisible Numbers  |\n");
        printf("| 0. Exit                     |\n");
        printf("+-----------------------------+\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter source file name: ");
                fgets(source, sizeof(source), stdin);
                source[strcspn(source, "\n")] = '\0'; // Remove newline
                printf("Enter destination file name: ");
                fgets(destination, sizeof(destination), stdin);
                destination[strcspn(destination, "\n")] = '\0'; // Remove newline
                copyFileContent(source, destination);
                break;
            case 2:
                printf("Enter file name to write numbers: ");
                fgets(numberFile, sizeof(numberFile), stdin);
                numberFile[strcspn(numberFile, "\n")] = '\0'; // Remove newline
                writeDivisibleBy3And5(numberFile);
                break;
            case 0:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    

    return 0;
}
