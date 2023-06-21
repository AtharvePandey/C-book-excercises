//we need to write a program to copy input into output, and then replace multiple blanks with a single one

#include<stdio.h>

int main(void){
    int c;

    while((c = getchar())!= EOF){
        if(c == '\b'){
            if((c = getchar()) == '\b'){
                putchar('\b');
            }else{
                putchar(c);
            }
        }else{
            putchar(c); 
        }
    }
    return 0;

    // if string is: hello  you fool; it becomes: hello you fool
}