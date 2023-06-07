// write test cases for the word count program; any inputs that might
// uncover any bugs?
#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    // edge cases for the above program:

    // maybe a line with multiple spaces would set state to out, and back to in later on in the code, so multiple spaces might count as one word
}
