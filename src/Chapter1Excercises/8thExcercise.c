//write a program for counting blanks, tabs and newlines

#include<stdio.h>

int main(void)
{
    int c; // for getChar()
    int bc, tc, nc = 0; //counters for blanks, tabs and newlines initialized to zero

    while((c=getchar())!=EOF){
        switch (c)
        {
        case '\b':
            bc++;
            break;
        case '\t':
            tc++;
            break;
        case '\n':
            nc++;
            break;
    
        default:
            break;
        }
    }

    printf("Blanks in line: %d, Tabs in line: %d, Num Lines: %d \n", bc,tc,nc);

    //the following is the string:

    //hello     tab
    // the string above has a space, and then tab then newline after the word tab, so 1 1 1 for each....
}
