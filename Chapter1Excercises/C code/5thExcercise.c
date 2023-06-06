#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
        write the far to cel excersize in reverse order from 300 -> 0     
    */

   float far; 
   printf("Far: \t Cel: \n");
   printf("--------------------------\n");

   for(far = 300; far>=0; far-=20){
    printf("%3.0f \t | \t %6.3f \n", far, (5.0/9.0)*(far-32.0));
   }

    return 0;
}
