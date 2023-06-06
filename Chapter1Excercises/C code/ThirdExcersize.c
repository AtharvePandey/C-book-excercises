#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        make a far to cel converter, use float and then make sure the output is a table
        you should print cel values if far values are 0, 20, ... 300
    */

    float far, cel, lower, upper, step; // we can have var declarations in one line

    lower = 0;
    upper = 300;
    step = 20;

    printf("farValue: \t celValue: \n");    // \t indicates a tab (4 spaces) and \n makes  a new line since printf can't make one..
    printf("--------------------------\n"); // print as a table like the specifications on page 16 of the book

    while (far <= upper)
    {
        cel = (5.0 / 9.0) * (far - 32.0);           // since we're using floats, all calculations will return a float (i.e int + float = float, the int will convert into float...)
        printf("%3.0f \t | \t %6.3f \n", far, cel); // the number 3.0 means 3 characters wide, and 0 digits after the decimal; 6.3 -> 6 char wide, and 3 digits after decimal
        far = far + step;                           // update
    }

    return 0;
}



/*
    main(){
        int far; 
        for(far = 0; far<=300; far += 20){
            printf("%3.0f \t | \t %6.3f \n", far, (5.0/9.0)*(far-32.0)); // basically value of far goes to %3.0f and value of cel is computed on the spot and given to %6.3f
        }
    }


*/
