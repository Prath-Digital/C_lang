#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Car {
    int carId;
    char* carCompany;
    char* carModel;
    char* carColor;
};

int main() {
    int SIZE;
    printf("Enter the number of cars: ");
    while (scanf("%d", &SIZE) != 1 || SIZE <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        while (getchar() != '\n');
    }

    struct Car *cars = (struct Car *)malloc(SIZE * sizeof(struct Car));
    if (cars == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int i;

    for (i = 0; i < SIZE; i++) {
        printf("Enter details for car %d:\n", i + 1);

        printf("Enter Car ID: ");
        while (scanf("%d", &cars[i].carId) != 1) {
            printf("Invalid input. Please enter an integer for Car ID: ");
            while (getchar() != '\n');
        }

        cars[i].carCompany = (char *)malloc(50 * sizeof(char));
        if (cars[i].carCompany == NULL) {
            printf("Memory allocation failed for Car Company!\n");
            return 1;
        }
        printf("Enter Car Company: ");
        scanf("%49s", cars[i].carCompany);

        cars[i].carModel = (char *)malloc(50 * sizeof(char));
        if (cars[i].carModel == NULL) {
            printf("Memory allocation failed for Car Model!\n");
            return 1;
        }
        printf("Enter Car Model: ");
        scanf("%49s", cars[i].carModel);

        cars[i].carColor = (char *)malloc(50 * sizeof(char));
        if (cars[i].carColor == NULL) {
            printf("Memory allocation failed for Car Color!\n");
            return 1;
        }
        printf("Enter Car Color: ");
        scanf("%49s", cars[i].carColor);
    }

    int choice;
    do {
        printf("+-----------------------------------------+\n");
        printf("|              MAIN MENU                  |\n");
        printf("+-----------------------------------------+\n");
        printf("| 1. View all cars                        |\n");
        printf("| 0. Exit                                 |\n");
        printf("+-----------------------------------------+\n");
        printf("Enter your choice: ");
        while (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid choice: ");
            while (getchar() != '\n');
        }

        switch (choice) {
            case 1:
                printf("\nDetails of Cars:\n");
                for (i = 0; i < SIZE; i++) {
                    printf("Car %d:\n", i + 1);
                    printf("ID: %d\n", cars[i].carId);
                    printf("Company: %s\n", cars[i].carCompany);
                    printf("Model: %s\n", cars[i].carModel);
                    printf("Color: %s\n", cars[i].carColor);
                }
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    for (i = 0; i < SIZE; i++) {
        free(cars[i].carCompany);
        free(cars[i].carModel);
        free(cars[i].carColor);
    }
    free(cars);

    return 0;
}
