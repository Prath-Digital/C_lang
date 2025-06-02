#include <stdio.h>

int main()
{
    int i = 1;
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i);

        i++;
    }
}