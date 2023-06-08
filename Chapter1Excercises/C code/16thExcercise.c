//revise the following code and say what it does
//afterwards we can add new stuff to it

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line [], int maxline);     //function declarations
void copy (char to[], char from[]);

int main(void){
    int len; //length of curr line
    int max; // length of the current max line 
    char line[MAXLINE]; //array for current line
    char longest[MAXLINE]; //array for the longest line

    max = 0; //initialize the maximum length so far to 0; 

    while((len = getLine(line, MAXLINE))>0){
        if(len>max){
            max = len;
            copy(longest, line);
        }
    }
    if(max>0){
        printf("%s", longest);
    }
    return 0;
}

int getLine(char line[], int maxline){
    int c, i; //c for getting the character and i is the index of for loop
    
    for(i = 0; i<maxline-1 && (c = getchar())!=EOF && c!='\n'; ++i){ //basically run the loop the length of arr - 1 and also while c is valid
        line[i] = c; //0th character of the line in array     
    }
    if(c == '\n'){ //after the loop breaks, the current value of c will be \n, so we add it to the end of arr and ++i
            line[i] = c;
            ++i; 
        }
    line[i] = "\0";  //add terminator to the very end of the array
    return i; //return length of the array
}

void copy(char to[], char from[]){
    int i = 0; 

    while((to[i] = from[i])!= "\0"){ //the copying happens inside the loop check itself, and we increment i in the loop body
        ++i; 
    }
}
