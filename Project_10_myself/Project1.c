#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#define MAX_CARS 1000

struct Car {
    int carId;
    char *carCompany;
    char *carModel;
    char *carColor;
};

struct Car cars[MAX_CARS];
int carCount = 0;

void displayMenu();
void createCar();
void viewCars();
void updateCar();
void deleteCar();

int fileExists(const char *filename) {
    struct stat buffer;
    return (stat(filename, &buffer) == 0);
}

char *safeStrdup(const char *str) {
    char *dup = strdup(str);
    if (!dup) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    return dup;
}

void main() {
    printf("Let's create the first car before proceeding.\n");
    createCar();

    int choice;

    while (1) {
        displayMenu();

        printf("Enter your choice: ");
        while (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid choice: ");
            while (getchar() != '\n');
        }

        if (choice == 0) {
            break;
        }

        switch (choice) {
        case 1:
            createCar();
            break;
        case 2:
            updateCar();
            break;
        case 3:
            deleteCar();
            break;
        case 4:
            viewCars();
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
}

void displayMenu() {
    printf("\n");
    printf("+-----------------------------------------+\n");
    printf("|              MAIN MENU                  |\n");
    printf("+-----------------------------------------+\n");
    printf("| 1. Make a new car                       |\n");
    printf("| 2. Update a car                         |\n");
    printf("| 3. Delete a car                         |\n");
    printf("| 4. View all cars                        |\n");
    printf("| 0. Exit                                 |\n");
    printf("+-----------------------------------------+\n");
}

void createCar() {
    if (carCount >= MAX_CARS) {
        printf("Car storage is full!\n");
        return;
    }

    struct Car newCar;

    printf("Enter car ID: ");
    while (scanf("%d", &newCar.carId) != 1) {
        printf("Invalid input. Please enter a valid car ID: ");
        while (getchar() != '\n');
    }

    char company[100], model[100], color[100];

    printf("Enter car company: ");
    scanf(" %99[^\n]", company);
    newCar.carCompany = safeStrdup(company);

    printf("Enter car model: ");
    scanf(" %99[^\n]", model);
    newCar.carModel = safeStrdup(model);

    printf("Enter car color: ");
    scanf(" %99[^\n]", color);
    newCar.carColor = safeStrdup(color);

    char filename[100];
    do {
        printf("Enter a file name to save this car (e.g., car1.txt): ");
        scanf(" %99s", filename);

        if (fileExists(filename)) {
            printf("File already exists. Please choose a different name.\n");
        } else {
            break;
        }
    } while (1);

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error creating file");
        free(newCar.carCompany);
        free(newCar.carModel);
        free(newCar.carColor);
        return;
    }

    fprintf(file, "Car ID: %d\n", newCar.carId);
    fprintf(file, "Company: %s\n", newCar.carCompany);
    fprintf(file, "Model: %s\n", newCar.carModel);
    fprintf(file, "Color: %s\n", newCar.carColor);

    fclose(file);

    cars[carCount++] = newCar;
    printf("Car created and saved successfully in %s!\n", filename);
}

void viewCars() {
    if (carCount == 0) {
        printf("No cars available.\n");
        return;
    }

    printf("\nList of Cars:\n");
    for (int i = 0; i < carCount; i++) {
        printf("ID: %d, Company: %s, Model: %s, Color: %s\n",
               cars[i].carId, cars[i].carCompany, cars[i].carModel, cars[i].carColor);
    }
}

void updateCar() {
    int id;
    printf("Enter car ID to update: ");
    while (scanf("%d", &id) != 1 || id <= 0 || id > carCount) {
        printf("Invalid car ID! Please enter a valid car ID: ");
        while (getchar() != '\n');
    }

    struct Car *car = &cars[id - 1];

    char company[100], model[100], color[100];

    printf("Enter new car company: ");
    scanf(" %99[^\n]", company);
    free(car->carCompany);
    car->carCompany = safeStrdup(company);

    printf("Enter new car model: ");
    scanf(" %99[^\n]", model);
    free(car->carModel);
    car->carModel = safeStrdup(model);

    printf("Enter new car color: ");
    scanf(" %99[^\n]", color);
    free(car->carColor);
    car->carColor = safeStrdup(color);

    printf("Car updated successfully!\n");
}

void deleteCar() {
    int id;
    printf("Enter car ID to delete: ");
    while (scanf("%d", &id) != 1 || id <= 0 || id > carCount) {
        printf("Invalid car ID! Please enter a valid car ID: ");
        while (getchar() != '\n');
    }

    free(cars[id - 1].carCompany);
    free(cars[id - 1].carModel);
    free(cars[id - 1].carColor);

    for (int i = id - 1; i < carCount - 1; i++) {
        cars[i] = cars[i + 1];
    }

    carCount--;
    printf("Car deleted successfully!\n");
}