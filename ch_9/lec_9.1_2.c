#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Enter a sentence: ");
    gets(word);

    char uppercase[100], lowercase[100];
    int asciiSum = 0;

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            uppercase[i] = word[i] - 32;
            lowercase[i] = word[i];
        } else if (word[i] >= 'A' && word[i] <= 'Z') {
            lowercase[i] = word[i] + 32;
            uppercase[i] = word[i];
        } else {
            uppercase[i] = word[i];
            lowercase[i] = word[i];
        }
        asciiSum += word[i];
    }

    uppercase[strlen(word)] = '\0';
    lowercase[strlen(word)] = '\0';

    printf("\n\n=====================================================================\n\n");

    printf("Original sentence: %s\n", word);
    printf("ASCII values: ");
    for (int i = 0; i < strlen(word); i++) {
        printf("%d ", word[i]);
    }
    printf("\nTotal of ASCII values: %d\n", asciiSum);
    printf("\n");
    printf("Uppercase sentence: %s\n", uppercase);
    printf("Lowercase sentence: %s\n", lowercase);
    printf("Size of the sentence: %zu\n", strlen(word));
    printf("Size of the sentence in bytes: %zu\n", sizeof(word));

    return 0;
}