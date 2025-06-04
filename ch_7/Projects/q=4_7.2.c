#include <stdio.h>

/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}
