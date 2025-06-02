#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the starting year: ");
    scanf("%d", &start);

    printf("Enter the ending year: ");
    scanf("%d", &end);

    printf("Leap years between %d and %d are:\n", start, end);

    while (start <= end)
    {
        if ((start % 4 == 0 && start % 100 != 0) || (start % 400 == 0))
        {
            printf("%d ", start);
        }
        start++;
    }
    return 0;
}
