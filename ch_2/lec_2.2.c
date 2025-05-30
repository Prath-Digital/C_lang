#include <stdio.h>
// #define MAX 999
// #define MIN 111

int main()
{
    // int num1 = 5;
    // int num2 = 15;
    // int a = 7;
    // float b = 7;
    // char c = 'p';

    // printf("Value of num1 is %d\n", num1);
    // printf("Value of num2 is %d\n\n", num2);
    
    // printf("MAX=%d\n", MAX);
    // printf("MIN=%d\n\n", MIN);

    // printf("a=%d\n", a);
    // printf("a=%3d\n", a);
    // printf("a=%3.2d\n\n", a);
    
    // printf("b=%f\n", b);
    // printf("b=%10f\n", b);
    // printf("b=%6.2f\n\n", b);
    
    // printf("c=%c\n", c);
    // printf("c=%3c\n", c);

    int d, e, f;
    printf("Enter first value: ");
    scanf("%d", &d);
    printf("Enter second value: ");
    scanf("%d", &e);
    f = d + e;

    printf("%d + %d = %d", d, e, f);

    return 0;
}