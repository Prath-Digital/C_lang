#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int get_valid_choice()
{
    int choice;
    char buffer[10];
    while (1)
    {
        printf("Enter your choice: ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            if (sscanf(buffer, "%d", &choice) == 1 && choice >= 1 && choice <= 3)
            {
                return choice;
            }
        }
        printf("Invalid input. Please enter a number between 1 and 3.\n");
    }
}

void write_even_odd()
{
    char even_filename[100], odd_filename[100];
    int start, end;

    printf("Enter the name of the file for even numbers: ");
    if (scanf("%99s", even_filename) != 1)
    {
        printf("Invalid input for file name.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    while (getchar() != '\n' && !feof(stdin));

    printf("Enter the name of the file for odd numbers: ");
    if (scanf("%99s", odd_filename) != 1)
    {
        printf("Invalid input for file name.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    while (getchar() != '\n' && !feof(stdin));

    printf("Enter the start of the range: ");
    if (scanf("%d", &start) != 1)
    {
        printf("Invalid input for range start.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    while (getchar() != '\n' && !feof(stdin));

    printf("Enter the end of the range: ");
    if (scanf("%d", &end) != 1 || end < start)
    {
        printf("Invalid input for range end. Ensure it is greater than or equal to the start.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    while (getchar() != '\n' && !feof(stdin));

    FILE *even_file = fopen(even_filename, "w");
    FILE *odd_file = fopen(odd_filename, "w");

    if (!even_file || !odd_file)
    {
        perror("Error opening file");
        if (even_file) fclose(even_file);
        if (odd_file) fclose(odd_file);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(even_file, "%d ", i);
        }
        else
        {
            fprintf(odd_file, "%d ", i);
        }
    }
    fclose(even_file);
    fclose(odd_file);

    even_file = fopen(even_filename, "r");
    odd_file = fopen(odd_filename, "r");

    if (!even_file || !odd_file)
    {
        perror("Error reading file");
        if (even_file) fclose(even_file);
        if (odd_file) fclose(odd_file);
        return;
    }

    char ch;
    printf("Even numbers from %s:\n", even_filename);
    while ((ch = fgetc(even_file)) != EOF)
    {
        putchar(ch);
    }
    printf("\n\nOdd numbers from %s:\n", odd_filename);
    while ((ch = fgetc(odd_file)) != EOF)
    {
        putchar(ch);
    }
    printf("\n");

    fclose(even_file);
    fclose(odd_file);
}

void generate_marksheets()
{
    int num_students;
    printf("Enter the number of students: ");
    if (scanf("%d", &num_students) != 1 || num_students <= 0)
    {
        printf("Invalid input for number of students. Please enter a positive integer.\n");
        while (getchar() != '\n' && !feof(stdin));
        return;
    }

    while (getchar() != '\n' && !feof(stdin));

    struct Student *students = malloc(num_students * sizeof(struct Student));
    if (!students)
    {
        perror("Memory allocation failed");
        return;
    }

    for (int i = 0; i < num_students; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);

        while (1)
        {
            printf("Roll no => ");
            if (scanf("%d", &students[i].roll_no) == 1 && students[i].roll_no > 0)
            {
                while (getchar() != '\n' && !feof(stdin));
                break;
            }
            else
            {
                printf("Invalid roll number. Please enter a positive integer.\n");
                while (getchar() != '\n' && !feof(stdin));
            }
        }

        printf("Name => ");
        if (!fgets(students[i].name, 50, stdin))
        {
            printf("Error reading name.\n");
            free(students);
            return;
        }
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        while (1)
        {
            printf("Chemistry => ");
            if (scanf("%d", &students[i].chem_marks) == 1 && students[i].chem_marks >= 0 && students[i].chem_marks <= 100)
            {
                while (getchar() != '\n' && !feof(stdin));
                break;
            }
            else
            {
                printf("Invalid marks. Please enter a number between 0 and 100.\n");
                while (getchar() != '\n' && !feof(stdin));
            }
        }

        while (1)
        {
            printf("Mathematics => ");
            if (scanf("%d", &students[i].maths_marks) == 1 && students[i].maths_marks >= 0 && students[i].maths_marks <= 100)
            {
                while (getchar() != '\n' && !feof(stdin));
                break;
            }
            else
            {
                printf("Invalid marks. Please enter a number between 0 and 100.\n");
                while (getchar() != '\n' && !feof(stdin));
            }
        }

        while (1)
        {
            printf("Physics => ");
            if (scanf("%d", &students[i].phy_marks) == 1 && students[i].phy_marks >= 0 && students[i].phy_marks <= 100)
            {
                while (getchar() != '\n' && !feof(stdin));
                break;
            }
            else
            {
                printf("Invalid marks. Please enter a number between 0 and 100.\n");
                while (getchar() != '\n' && !feof(stdin));
            }
        }

        printf("\n");
    }

    for (int i = 0; i < num_students; i++)
    {
        int total = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percent = (total / 300.0f) * 100.0f;
        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total);
        printf("Percent => %.2f%%\n\n", percent);
    }

    free(students);
}

int main()
{
    int choice;
    do
    {
        printf("+========================================+\n");
        printf("|            \033[1;34mMAIN MENU\033[0m                   |\n");
        printf("+========================================+\n");
        printf("| \033[1;32m1.\033[0m Write even and odd numbers to files |\n");
        printf("| \033[1;32m2.\033[0m Generate student mark sheets        |\n");
        printf("| \033[1;32m3.\033[0m Exit                                |\n");
        printf("+========================================+\n");
        choice = get_valid_choice();
        switch (choice)
        {
        case 1:
            write_even_odd();
            break;
        case 2:
            generate_marksheets();
            break;
        case 3:
            printf("\033[1;31mExiting...\033[0m\n");
            break;
        }
        printf("\n");
    } while (choice != 3);

    return 0;
}
