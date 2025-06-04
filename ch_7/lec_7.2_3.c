#include <stdio.h>

/*
 * * * * * *
 *         *
 * * * * * *
 *         *
 *         *
 */

int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
            printf(" * * * * * *\n");
            break;

        default:
            printf(" *         *\n");
            break;
        }
    }

    return 0;
}
