#include <stdio.h>

int main()
{
    int N, M, i, total;
    
    printf("Enter any number: ");
    scanf("%d", &N);
    
    printf("Enter any a multiplier: ");
    scanf("%d", &M);
    
    for (i = 1; i <= M; i++)
    {
        total = N * i;
        printf("%d * %d = %d\n", N, i, total);
    }
    
}