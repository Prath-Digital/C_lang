#include <stdio.h>

void main() {
    int c;
    float f;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &c);

    f = (c * 9.0 / 5.0) + 32;

    printf("The temperature in Fahrenheit is: %.2f\n", f);
}
