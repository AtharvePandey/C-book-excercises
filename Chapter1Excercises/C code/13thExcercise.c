//write a program that prints a histogram of the lengths of words in its input
//must be horizontal....

//i.e if input is: Hello hi again; output would be: 5,3,5 for the lengths of each word present (idk what they mean by histogram specifically...)

// #include <stdio.h>
// #define IN 1
// #define OUT 0

// int main(void)
// {
//     int c, nl, nw, nc, state;
//     state = OUT;
//     nl = nw = nc = 0;

//     while ((c = getchar()) != EOF)
//     {
//         ++nc;
//         if (c == '\n')
//         {
//             ++nl;
//         }
//         if (c == ' ' || c == '\t' || c == '\n')
//         {
//             state = OUT;
//         }
//         else if (state == OUT)
//         {
//             state = IN;
//             ++nw;
//         }
//     }
// }


//using the above as an idea to keep track of words and then get their lengths...
//might use an array to keep track of each word of length where each index represents the ith word in the input... 


#include<stdio.h>
#define IN 1 //this is if we're going through a word
#define OUT 0 //this is if we're out of a word

int main(void)
{
    int arr[10]; //initialize the array
    for(int i = 0; i<10; ++i){
        arr[i] = 0; //initialize each element of the array to 0
    }
    int state = IN; //we start in the first word
    int c; 
    int wordLen = 0; 
    int arrIndex = 0; 
    
    while((c = getchar())!=EOF){
        if(state == IN){
            ++wordLen;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            arr[arrIndex] = wordLen;
            wordLen = 0;
            state = IN;
            ++arrIndex;
        }
    }

    //above code will throw an error if the number of words exceeds array length....

    printf("length of all the words in order: \n");

    for(int i = 0; i<10; i++){
        printf("length of the %dth word is %d characters long \n", i, arr[i]);
    }
//input: hello hi
//output: length of the 0th word is 5
//        length of the 1th word is 2

    return 0;
}

