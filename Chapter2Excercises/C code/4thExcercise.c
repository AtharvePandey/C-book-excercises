//write a function that deletes each character in s1 that matches any character in the string s2
//so basically remove characters from s1 that are present in both (s2 shouldn't change....)
//do we assume the strings are the same length?

#include <stdio.h>
#include <string.h> //to get the length of the arrays.... 

char strRemove(char s1[], char s2[]);

int main(void){
    char *string1 = "Hello";
    char *string2 = "howre"; //return string shold be ll but might have to debug

    printf("retString: %c\n", strRemove(string1, string2));
    return 0;
}


char strRemove(char s1[], char s2[]){
    //lets assume both strings are the same length?

}