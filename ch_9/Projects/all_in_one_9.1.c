#include <stdio.h>

int main()
{
    char str[100];
    char upper[100], lower[100], toggle[100];
    int i = 0, asciiSum = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z')
        {
            upper[i] = ch - 32;
        }
        else
        {
            upper[i] = ch;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            lower[i] = ch + 32;
        }
        else
        {
            lower[i] = ch;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            toggle[i] = ch + 32;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            toggle[i] = ch - 32;
        }
        else
        {
            toggle[i] = ch;
        }

        asciiSum += ch;
        i++;
    }

    upper[i] = '\0';
    lower[i] = '\0';
    toggle[i] = '\0';

    printf("\n\n=====================================================================\n\n");

    printf("Original string: %s", str);
    printf("ASCII values: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", str[j]);
    }
    printf("\nTotal of ASCII values: %d\n", asciiSum);
    printf("\n");
    printf("Uppercase string: %s\n", upper);
    printf("Lowercase string: %s\n", lower);
    printf("Toggle case string: %s\n", toggle);

    return 0;
}
