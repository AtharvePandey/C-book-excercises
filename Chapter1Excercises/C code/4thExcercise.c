#include <stdio.h>
/*
    make a cel to far converter, use float and then make sure the output is a table
    you should print cel values if far values are 0, 20, ... 300
*/

// basically the same thing but the other way
//the eq :  (C × 9/5) + 32 = F

int main(int argc, char const *argv[])
{
    float far, cel, lower, upper, step; // we can have var declarations in one line

    lower = 0;
    upper = 300;
    step = 20;

    printf("celValue: \t farValue: \n");    // \t indicates a tab (4 spaces) and \n makes  a new line since printf can't make one..
    printf("--------------------------\n"); // print as a table like the specifications on page 16 of the book

    for (cel = lower; cel <= upper; cel = cel + step)
        printf("%3.2f\t\t %6.2f\n", cel, ((9.0 / 5.0) * (cel))+32);

    return 0;
}
