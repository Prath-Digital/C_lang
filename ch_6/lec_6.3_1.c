#include <stdio.h>

// use of break and continue statements

int main()
{
    int i = 1;

loop:
    printf("%d\n", i);
    i++;
    if (i <= 10)
    {
        goto loop;
    }

    return 0;
}
