#include <stdio.h>

int main()
{
    int a = 12;
    int b = 6;
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;

    printf("Addition of %d and %d is %d\n", a, b, add);
    printf("Subtraction of %d and %d is %d\n", a, b, sub);
    printf("Multiplication of %d and %d is %d\n", a, b, mul);
    printf("Divisoin of %d and %d is %d\n", a, b, div);
    printf("Modulous of %d and %d is %d\n\n", a, b, mod);
    
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d %% %d = %d", a, b, mod);
}