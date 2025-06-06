#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char password[])
{
    int hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    if (strlen(password) < 6)
    {
        return 0;
    }
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isalpha(password[i]))
            hasLetter = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }
    return (hasLetter && hasDigit && hasSpecial);
}

int main()
{
    char password[100];
    char email[100];
    char correctEmail[100];
    char correctPassword[100];

    printf("Set your email: ");
    scanf("%s", correctEmail);

    printf("Create your password: ");
    scanf("%s", correctPassword);

    if (isStrongPassword(correctPassword))
    {
        printf("Your password is Strong.\n");
    }
    else
    {
        printf("Your password is not Strong.\n");
    }

    printf("\nEnter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    printf("Debug: Stored email = %s, Entered email = %s\n", correctEmail, email);
    printf("Debug: Stored password = %s, Entered password = %s\n", correctPassword, password);

    if (strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0)
    {
        printf("Login Successful ...\n");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}
