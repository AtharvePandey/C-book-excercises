//we want to verify thta getchar(0)!=EOF returns a boolean (0 or 1)

#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d", (int)getchar()!=EOF); 
    return 0;
}
