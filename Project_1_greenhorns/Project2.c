#include <stdio.h>

void main() {
    int u, h, d, t, f;

    printf("Enter the Base salary: ");
    scanf("%d", &u);

    h = (u*10) / 100;
    d = (u*5) / 100;
    t = (u*8) / 100;
    f = u + h + d + t;

    printf("Gross salary: %d", f);
}
