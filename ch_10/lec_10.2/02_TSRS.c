#include <stdio.h>

// Create a UDF which prints the cube of a number

// Take Something
// Return Something

int cube(int a);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The cube of %d is: %d\n", num, cube(num));
    return 0;
}

int cube(int a)
{
    return a * a * a;
}
