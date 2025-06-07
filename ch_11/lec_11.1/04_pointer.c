#include <stdio.h>

// Pointer with strings

void adress(char *p, int size);
void elements(char *p, int size);

int main()
{
    int size;

    printf("Enter the size of the string: ");
    scanf("%d", &size);

    char a[size];

    char *p;
    int i;

    p = a;

    elements(p, size);
    adress(p, size);
    

    return 0;
}

void adress(char *p, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%u => %c\n", p + i, *(p + i));
    }
}
void elements(char *p, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter a character: ");
        scanf(" %c", p + i);
    }
}