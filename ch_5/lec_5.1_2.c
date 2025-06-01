#include <stdio.h>

void main()
{
    double age;

    printf("Enter your age: ");
    scanf("%lf", &age);

    if (age > 18)
    {
        printf("You can vote.\n");
    }
    else if (age < 18)
    {
        printf("You can't vote.\n");
    }
    else if (age == 18)
    {
        printf("You can vote.\n");
    }
    else
    {
        printf("Invalid age entered.\n");
    }
}
