/*
Program to calculate word length of the computer
*/

#include <stdio.h>

int main(){
    unsigned long num = 1;
    int count = 1;

    while((num = num << 1) != 0)
        count++;
    
    printf("the word length of the computer is %dbits\n",count);
} // but in windows unsigned long is 32bits :(