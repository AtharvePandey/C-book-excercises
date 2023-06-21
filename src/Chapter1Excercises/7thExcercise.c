//print the value of EOF

#include<stdio.h>

int main(int argc, char const *argv[])
{
    //since we want to print EOF itself, we will give an empty string to getChar()

    int c;
    c = getchar(); 
    //an empty file/string yields EOF which is stored in binary 
    //putchar(c);
    printf("%d",c);
    return 0;
}
