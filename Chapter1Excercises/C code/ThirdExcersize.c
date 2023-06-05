#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        make a far to cel converter, use float and then make sure the output is a table
        you should print cel values if far values are 0, 20, ... 300
    */

    float far, cel;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("farValue: \t celValue: \n");
    printf("--------------------------\n");

    while (far <= upper)
    {
        cel = (5.0 / 9.0) * (far - 32.0);
        printf("%3.0f \t | \t %6.3f \n", far, cel);
        far = far + step;
    }

    return 0;
}
