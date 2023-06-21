//write a function any(s1,s2) which returns the first location in a string  where any character
//from the string s2 occurs, or -1 if s1 has no characters from s2
//dont use strpbrk from the standard library 
//
// The strings can have different lengths, but no limit to their respective length is given
// Capital and Lowercase are treated as two different Characters

#include <stdio.h>

int any(char s1[], char s2[]);

int main(void) {

        char *str = "First String";
        char *str2 = "Second";

        printf("This is\nany(\"First String\",\"Second\") = %i\n", any(str, str2));

        return 0;
        
}


int any(char s1[], char s2[]) {
        int i, j;

        // Iterate over each character in s1
        for (i = 0; s1[i] != '\0'; i++) {

                // check if the character in s1 is present in s2
                for (j = 0; s2[j] != '\0'; j++) {
                        // This is the condition, are two characters the same
                        if (s1[i] == s2[j]) {
                                return i;
                        }
                }
        }

        return -1;
}
