#include <stdio.h>

int main()
{
    char day;

    printf("m = Monday\n");
    printf("t = Tuesday\n");
    printf("w = Wednesday\n");
    printf("T = Thursday\n");
    printf("f = Friday\n");
    printf("s = Saturday\n");
    printf("S = Sunday\n\n");

    printf("Enter first three characters of a day: ");
    scanf("%c", day);

    switch (day)
    {
    case 'm':
            printf("Monday\n");
        break;
    case 't':
            printf("Tuesday\n");            
        break;
    case 'w':
            printf("Wednesday\n");
        break;
    case 'T':
            printf("Thursday\n");
        break;
    case 'f':
            printf("Friday\n");
        break;
    case 's':
            printf("Saturday\n");
        break;
    case 'S':
            printf("Sunday\n");
        break;
    default:
        printf("Invalid day...\n");
    }

    return 0;
}
