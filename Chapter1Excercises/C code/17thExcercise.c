//not this is 1.19 in the book, but im skipping 1.17 and 1.18 because they are just different
// versions of previous excercises 

//write a function reverse(s) that reverses a character string, s. use the function to write a program
//that reverses its input line by line... 

#include<stdio.h>
#define MAXLINESIZE 100

char reverse(char s[], int maxSize);

int main(void)
{
    //basically same code as the previous excercise but call the function below as well....
    return 0;
}

char reverse(char s[], int maxSize){
    //line looks like this: Hello \n \0 
    //so we must loop from length -1 
    char retArr[MAXLINESIZE];
    int j = 0;
    
    for(int i = maxSize - 1; i>=0; --i){
        retArr[j] = s[i];
        j++;
    }
return retArr;

}