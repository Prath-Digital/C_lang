#include <stdio.h>

void main()
{
    int a;
    int b;

    a = 6 * 6 / 3 - 9 + 4 / 2;
    b = 6 * 6 / (3 - 9) + 4 / 2;

    printf("a = %d\n", a);
    printf("a = %d\n", b);

    int num1 = 10;
    float num2 = 5.5;

    float ans1 = num1 + num2; // implicit type conversion

    printf("ans1 = %0.1f\n", ans1);
    
    int num11 = 10;
    float num22 = 5.5;

    int ans2 = num11 + (int)num22;  // explicit type conversion

    printf("ans2 = %d\n", ans2);
};