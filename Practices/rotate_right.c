/*
program which rotates right the interger n by b positions 
*/
#include<stdio.h>

unsigned right_rot(unsigned int num, int shiftby){
    
    return( num >> shiftby | num << (32-shiftby) ); // (32 - shiftby) will give the postion from which it should be shifted to 0pos 
    
}

int main(){
    unsigned int number;
    unsigned int rotated;

    number = 0x0000020F; //0000 0000 0000 0000 0000 0010 0000 1111 
    rotated = right_rot(number,3);
    printf("%u",rotated);
}