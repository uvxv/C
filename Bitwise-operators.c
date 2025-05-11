/*
- C provides several operators for bit manipulation:
    1. & - bitwise operators
    2. | - bitwise inlcusive OR
    3. ^ - bitwise exculive OR (XOR)
    4. >> - right shift 
    5. << - left shift
    6. ~ - one's complement (unary)

- & is oftely used for MASKING
- | to set the bits
- ^ used to flip the bits
- >> to fast divide the number by (2^n)
- << to fast multiply the number by (2^n)
*/

#include <stdio.h>


int get_bits(unsigned int num, unsigned int pos, unsigned int numbits){ 
    // nums = the integer
    // pos = position (2^pos) to retrieve its from 
    // numbits = No. of bits wanted from the retreieved
    
    // The goal is exract (numbits) No. of bits end at the bit position of (pos)

    return(num >> (pos+1-numbits)) & ~(~0 << numbits);
    // pos+1 include the bit in the bit in 2^n pos  

}

int main(){
    int i = 0x05; // 0000 0101

    int ret = get_bits(i, 4, 3);

    printf("%d",ret);

}
