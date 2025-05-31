#include <stdio.h>

void main()
{
    double num;

    printf("Enter your number: ");
    scanf("%lf", &num);

    if (num > 0)
    {
        printf("Your number is Positive\n");
    }
    else if (num < 0)
    {
        printf("Your number is Negative\n");
    }
    else if (num == 0)
    {
        printf("Your number is Neutral\n");
    }
    else
    {
        printf("Invalid number entered.\n");
    }
}
