/*
program which rotates left the interger n by b positions 
*/

#include <stdio.h>

unsigned int left_rot(unsigned int num, int shiftby ){
    return(num << shiftby | num >> (32 - shiftby));
}

int main(){
    unsigned int number = 0xF0000000; // 1111 0000 0000 0000 0000 0000 0000 0000
    unsigned int rotated = left_rot(number,3);

    printf("%u",rotated);
}