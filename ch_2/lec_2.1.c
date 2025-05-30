#include <stdio.h>

int main()
{
    /*
                Rules for variables:
        
    1. First letter must be of an alphabetic letter or underscore(_)
    int Prath;
    int _Prath;
    int Prath123;
    2. Variable name can't contain a whitespace(s)
    int Prath Udhnawala; // invalid
    3. A number or any special character canot be placed at first position
    int 7Prath; // invalid
    int @Prath; // invalid
    4. Variable name can't be same as keyword
    int int;
    int float;
    int char;
    int if;
    */

    int a = 7;       // declaration and initialisation
    int b = 3;       // declaration and initialisation
    int sum = a + b; // declaration and initialisation

    int c = 4, d = 6, sum2 = c + d; // declaration and initialisation

    int e, f, sum3;

    e = 9;
    f = 1;
    sum3 = e + f;

    float Math_PI = 3.14159;
    char g = ' ';

    // printf("message and format specifier(s)", variable(s));
    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("The sum of %d and %d is %d\n", c, d, sum2);
    printf("The sum of %d and %d is %d\n", e, f, sum3);
    printf("%c", g);
    printf("%g", Math_PI);

    return 0;
}