#include <stdio.h>

int main()
{
    int i;
   
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf(" *  *  *  *  * \n");
        }
        else
        {
            printf(" *           * \n");
        }
        
    }

    return 0;
}
