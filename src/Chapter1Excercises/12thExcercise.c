// write a program that prints its input one word per line

// im going to be using the skeleton code from the previous excercise

/*
#include<stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar())!=EOF){
        ++nc;
        if(c =='\n'){
            ++nl;
        }
        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }

    }

}
*/
//input : hello you

//output: hello
       // you

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int c, state;
    state = IN;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        if(state == IN){
            putchar(c);
        }
        else if (state == OUT)
        {
            state = IN;
            putchar('\n');
        }
    }

    return 0;
}
