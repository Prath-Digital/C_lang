#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

void safeInput(char *prompt, char *str, size_t size)
{
    printf("%s", prompt);
    if (fgets(str, (int)size, stdin))
    {
        str[strcspn(str, "\n")] = '\0';
    }
    else
    {
        fprintf(stderr, "Input error. Exiting.\n");
        exit(1);
    }
}

int safeIntInput(char *prompt, int min, int max)
{
    char buffer[32];
    int value;
    while (1)
    {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin))
        {
            if (sscanf(buffer, "%d", &value) == 1 && value >= min && value <= max)
                return value;
        }
        printf("Invalid input. Please enter an integer between %d and %d.\n", min, max);
    }
}

struct Student
{
    int stu_id;
    char stu_name[MAX];
    int stu_age;
    char stu_course[MAX];
    char stu_city[MAX];
    int stu_standard;
    char stu_school[MAX];
};

struct Employee
{
    int emp_id;
    char emp_name[MAX];
    int emp_age;
    char emp_role[MAX];
    char emp_city[MAX];
    int emp_experience;
    char emp_company_name[MAX];
};

void displayMenu()
{
    printf("\n");
    printf("+-----------------------------------------+\n");
    printf("|              MAIN MENU                  |\n");
    printf("+-----------------------------------------+\n");
    printf("| 1. Enter Student Records                |\n");
    printf("| 2. Enter Employee Records               |\n");
    printf("| 0. Exit                                 |\n");
    printf("+-----------------------------------------+\n");
    printf("Enter your choice: ");
}

int main()
{
    struct Student students[3];
    int i, n, choice;
    do
    {
        displayMenu();
        choice = safeIntInput("", 0, 3);

        switch (choice)
        {
        case 1:
            for (i = 0; i < 3; i++)
            {
                printf("\nEnter details for Student %d:\n", i + 1);
                students[i].stu_id = safeIntInput("ID: ", 1, 9999);
                safeInput("Name: ", students[i].stu_name, sizeof(students[i].stu_name));
                students[i].stu_age = safeIntInput("Age: ", 3, 100);
                safeInput("Course: ", students[i].stu_course, sizeof(students[i].stu_course));
                safeInput("City: ", students[i].stu_city, sizeof(students[i].stu_city));
                students[i].stu_standard = safeIntInput("Standard (1-12): ", 1, 12);
                safeInput("School: ", students[i].stu_school, sizeof(students[i].stu_school));
            }

            printf("\n--- Student Records ---\n");
            for (i = 0; i < 3; i++)
            {
                printf("Student %d: %d, %s, %d, %s, %s, Std-%d, %s\n", i + 1,
                       students[i].stu_id, students[i].stu_name, students[i].stu_age,
                       students[i].stu_course, students[i].stu_city,
                       students[i].stu_standard, students[i].stu_school);
            }
            break;
        case 2:
            n = safeIntInput("\nEnter number of employees (1-100): ", 1, 100);
            struct Employee *employees = malloc(n * sizeof(struct Employee));
            if (!employees)
            {
                fprintf(stderr, "Memory allocation failed.\n");
                return 1;
            }

            for (i = 0; i < n; i++)
            {
                printf("\nEnter details for Employee %d:\n", i + 1);
                employees[i].emp_id = safeIntInput("ID: ", 1, 9999);
                safeInput("Name: ", employees[i].emp_name, sizeof(employees[i].emp_name));
                employees[i].emp_age = safeIntInput("Age: ", 18, 100);
                safeInput("Role: ", employees[i].emp_role, sizeof(employees[i].emp_role));
                safeInput("City: ", employees[i].emp_city, sizeof(employees[i].emp_city));
                employees[i].emp_experience = safeIntInput("Experience (years): ", 0, 80);
                safeInput("Company: ", employees[i].emp_company_name, sizeof(employees[i].emp_company_name));
            }

            printf("\n--- Employee Records ---\n");
            for (i = 0; i < n; i++)
            {
                printf("Employee %d: %d, %s, %d, %s, %s, %d years, %s\n", i + 1,
                       employees[i].emp_id, employees[i].emp_name, employees[i].emp_age,
                       employees[i].emp_role, employees[i].emp_city,
                       employees[i].emp_experience, employees[i].emp_company_name);
            }

            free(employees);
            break;
        case 3:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
