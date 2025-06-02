#include <stdio.h>

int main()
{
    int i;
    int num = 1;

    printf("Enter any number: ");
    scanf("%d", &i);

    while (i >= num)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }

        i--;
    }
}