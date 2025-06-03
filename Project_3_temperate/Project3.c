#include <stdio.h>

int main()
{
    int num, first, last;
    printf("Enter any number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10)
    {
        num /= 10;
    }
    first = num;
    printf("The sum of first digit and last digit is %d", first + last);
    return 0;
}
