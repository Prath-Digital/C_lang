#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;

    printf("The perimeter of the circle is: %.2f\n", perimeter);

    return 0;
}
