//write a for loop eq to the following for loop:

// for(i = 0; i<lim-1 && (c=getchar())!= '\n' && c != EOF; ++i){
//      s[i] = c;
// }

//without using && and ||

#include<stdio.h>
#define lim 2

int main(void)
{
    int i, c;
    char s[lim]; //use small size for examples sake 

    for(i = 0; i<lim-1;++i){
        if((c = getchar())!= '\n'){
            if(c != EOF){
                s[i] = c;
            }
        }else{
            break;
        }
    }
    return 0;
}
