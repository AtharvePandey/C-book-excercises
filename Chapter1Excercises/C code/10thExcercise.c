//we want to write a program to copy input into output but also print out \t and\b accordingly instead

#include <stdio.h>

int main(void)
{
    int c;

    while((c = getchar())!=EOF){
        if(c == '\t'){
            putchar('\t');
        }else if(c == '\b'){
            putchar('\b');
        }else{
            putchar(c);
        }
    }
    return 0;

    // hey how is it    going ==> hey how is it \t going
}
