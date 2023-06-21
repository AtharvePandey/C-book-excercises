//we want to verify thta getchar(0)!=EOF returns a boolean (0 or 1)

#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d", (int)getchar()!=EOF); 
    return 0;
}

//note upon executing the code, we can type stuff into the terminal as our
//'input' string which will then evaluate the getChar() and return 
// 1 if the string we inputted is empty (EOF) or 0 if we inputted a string
//or even one character..
