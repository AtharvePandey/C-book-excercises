//write a program to print out a histogram of the different frequencies of characters in the input

#include <stdio.h>

#define NUM_CHARS 128  // Number of ASCII characters

int main() {
    int charCount[NUM_CHARS] = {0};  // Array to store character counts
    int c;

    // Read input and count character frequencies
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < NUM_CHARS)
            charCount[c]++;
    }

    // Print the histogram
    printf("Character Histogram:\n");
    for (int i = 0; i < NUM_CHARS; i++) {
        if (charCount[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < charCount[i]; j++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
