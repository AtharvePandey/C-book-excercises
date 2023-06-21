//write a function that deletes each character in s1 that matches any character in the string s2
//so basically remove characters from s1 that are present in both (s2 shouldn't change....)
//do we assume the strings are the same length?

#include <stdio.h>
#include <string.h> //to get the length of the arrays.... 

void strRemove(char s1[], char s2[]);

int main(void){
    char* string1 = "Hello";
    char* string2 = "howre"; //return string shold be ll but might have to debug

    strRemove(string1, string2);

    printf("retString: %s\n", string1);
    return 0;
}



void strRemove(char s1[], char s2[]) {
    int i, j, k;
    i = j = k = 0;

    // Iterate over each character in s1
    for (i = 0; s1[i] != '\0'; i++) {
        int shouldRemove = 0; //declare a boolean in each iteration
        
        // Check if the character in s1 is present in s2
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                shouldRemove = 1;
                break;
            }
        }
        
        // If the character should not be removed, copy it back to s1
        if (!shouldRemove) {
            s1[k++] = s1[i];
        }
    }
    
    // Terminate s1 with a null character at the updated length
    s1[k] = '\0';
}
