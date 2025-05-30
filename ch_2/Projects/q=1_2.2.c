#include <stdio.h>
#include <conio.h>
#define PI 3.14

int main()
{
    int r;
    float area;

    printf("Enter a radius: ");
    scanf("%d", &r);

    area = PI * r * r;

    printf("Area of circle is %0.2f", area);

    return 0;
}