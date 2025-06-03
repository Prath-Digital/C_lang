#include <stdio.h>

int main() {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch += 4)
    {
        if (ch == 'y')
        {
            printf("%c ", ch);
        }
        else
        {
            printf("%c, ", ch);
        }
        
    }

    return 0;
}
