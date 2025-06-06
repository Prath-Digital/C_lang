#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int inputChoice, operationChoice, i, j;

    do
    {
        printf("Choose input type:\n");
        printf("1. Sentence\n");
        printf("2. Word\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &inputChoice);
        getchar();

        if (inputChoice == 0)
        {
            break;
        }

        printf("Enter your input: ");
        if (inputChoice == 1)
            fgets(str, sizeof(str), stdin);
        else
            scanf("%s", str);

        str[strcspn(str, "\n")] = '\0';

        do
        {
            printf("\nChoose an operation:\n");
            printf("1. Check if palindrome\n");
            printf("2. Count frequency of each character\n");
            printf("0. Back to input menu\n");
            printf("Enter your choice: ");
            scanf("%d", &operationChoice);

            switch (operationChoice)
            {
            case 1:
            {
                int len = strlen(str);
                int isPalindrome = 1;
                for (i = 0, j = len - 1; i < j; i++, j--)
                {
                    if (str[i] != str[j])
                    {
                        isPalindrome = 0;
                        break;
                    }
                }
                if (isPalindrome)
                    printf("Given string is a Palindrome.\n");
                else
                    printf("Given string is not a Palindrome.\n");
                break;
            }

            case 2:
            {
                int freq[256] = {0};
                for (i = 0; str[i] != '\0'; i++)
                {
                    freq[(unsigned char)str[i]]++;
                }
                printf("Frequency of each character:\n");
                for (i = 0; i < 256; i++)
                {
                    if (freq[i] > 0)
                    {
                        printf("'%c' => %d\n", i, freq[i]);
                    }
                }
                break;
            }

            case 0:
                break;

            default:
                printf("Invalid choice.\n");
            }
        } while (operationChoice != 0);

    } while (inputChoice != 0);

    return 0;
}
