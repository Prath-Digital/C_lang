#include <stdio.h>

int main() {
int index = 1;

    while (index <= 30)
    {
        if (index % 2 == 0)
        {
            printf("%d\n", index);
        }
        
        index--;
    }
    
    return 0;
}