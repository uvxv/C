// Casting with Pointers.

#include <stdio.h>

int main()
{
    int a = 1025;
    int *pA;

    pA = &a; // points to a 

    char *pB;
    pB = (char *)pA; // type casting which also tells the compiler - "treat the address stored in a as if it were the address of char variable"
    // Also it may results in truncating the 4bytes to 1byte

    printf("pA : %d\npB : %d\n", *pA,*pB);


}