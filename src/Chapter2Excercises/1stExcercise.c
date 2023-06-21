//we want to write a program that determines the ranges of char, short, int and long variables both signed and unsigned
// we can do this by printing appropriate values from standard headers and by direct computation. 

#include<stdio.h>

//the standard headers are included below:

#include<limits.h>
#include<float.h>

int main(void)
{
    printf("the following are the min and max ranges for char, shor, int and long variables\n");
    printf("they are both unsigned and signed\n");
    
    printf("the range of an unsigned char variable is 0 to %u\n", UCHAR_MAX); 
    printf("the range of an singed char variable is %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    
    printf("the range of an unsigned short variable is 0 to %u\n", USHRT_MAX); 
    printf("the range of an singed short variable is %d to %d\n", SHRT_MIN, SHRT_MAX);

    printf("the range of an unsigned int variable is 0 to %u\n", UINT_MAX); 
    printf("the range of an singed int variable is %d to %d\n", INT_MIN, INT_MAX);

    printf("the range of an unsigned long variable is 0 to %lu\n", ULONG_MAX); 
    printf("the range of an singed long variable is %ld to %ld\n", LONG_MIN, LONG_MAX);

    return 0;
}
