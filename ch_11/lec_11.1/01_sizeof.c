#include <stdio.h>

/*
    Memory Conversion

    8 bits => 1 byte
    1024 bytes => 1 kilo byte
    1024 kilo bytes => 1 mega byte
    1024 mega bytes => 1 giga byte
    1024 giga bytes => 1 tera byte
    1024 tera bytes => 1 peta byte
    1024 peta bytes => 1 exa byte
    1024 exa bytes => 1 zetta byte
    1024 zetta bytes => 1 yotta byte
*/
/*
    Size of int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of char: 1 byte
*/

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nSize in bytes of integer: %zu\n\n", sizeof(num));

    float fnum;

    printf("Enter a number: ");
    scanf("%f", &fnum);

    printf("\nSize in bytes of float: %zu\n\n", sizeof(fnum));

    double dnum;
    printf("Enter a number: ");
    scanf("%lf", &dnum);

    printf("\nSize in bytes of double: %zu\n\n", sizeof(dnum));

    char cnum;
    printf("Enter a character: ");
    scanf(" %c", &cnum);

    printf("\nSize in bytes of character: %zu\n\n", sizeof(cnum));
}