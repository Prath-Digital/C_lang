#include <stdio.h>

/*
    format specifiers for pointers:
    %p - pointer
    %u - unsigned integer (address in memory)
    %d - signed integer (address in memory)
    %x - hexadecimal (address in memory)
    %X - hexadecimal (address in memory, uppercase)
    %lu - unsigned long (address in memory)
    %ld - signed long (address in memory)
    %zu - size_t (address in memory, size of the object)
*/

int main()
{
    int a = 7;
    int b = 7;

    int *p1;
    int *p2;

    p1 = &a;
    p2 = &b;

    printf("Value of a: %d\n", *p1);
    printf("Value of b: %d\n", *p2);

    printf("Address of a: %u\n", p1);
    printf("Address of b: %u\n", p2);

    return 0;
}
