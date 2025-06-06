#include <stdio.h>

int main() {
    char word[100];

    printf("Enter a sentence: ");
    int index = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
        word[index++] = ch;
    }
    word[index] = '\0';

    char uppercase[100], lowercase[100];
    int asciiSum = 0;

    int length = 0;
    while (word[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
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

    uppercase[length] = '\0';
    lowercase[length] = '\0';

    printf("\n\n====================================================================="
           "\n\n");

    printf("Original sentence: %s\n", word);
    printf("ASCII values: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", word[i]);
    }
    printf("\nTotal of ASCII values: %d\n", asciiSum);
    printf("\n");
    printf("Uppercase sentence: %s\n", uppercase);
    printf("Lowercase sentence: %s\n", lowercase);
    printf("Size of the sentence: %d\n", length);
    printf("Size of the sentence in bytes: %zu\n", sizeof(word));

    return 0;
}