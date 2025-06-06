#include <stdio.h>

// Create a UDF which prints the square of a number

// Take Nothing
// Return Something

int square(int a);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of %d is: %d\n", num, square(num));
    return 0;
}

int square(int a)
{
    return a * a;
}
