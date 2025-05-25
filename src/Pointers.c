// Pointers are variables which stores the address of another variable

#include <stdio.h>

int main ()
{
    int a = 10; // Interger variable (intialized)
    int *pA; // Pointer to integer

    char b = 'c';
    char *pB; // Pointer to character

    pB = &b; // & is called as "Adress of" operator
    pA = &a; // Stores the address of variable - a

    printf("*pB = %c\n*pA = %d\n", *pB, *pA);
    printf("---------------------\n");
    printf("Address of a = %X\nAddress of *pA = %X\nAddress stored in *pA = %X\n", &a,&pA,pA);
    printf("---------------------\n");
    printf("Address of b = %X\nAddress of *pB = %X\nAddress stored in *pB = %X\n", &b,&pB,pB);
    printf("---------------------\n");

    /*
     - Here the * in pA and pB (in the expression) meant for dereferencing
     - Deferencing (or indirect accessing) refers to accsssing a value from the address pointed to...
     - Deferencing can appear in right and left hand side of the assignment operator (Moreover the LHS derefrencing is typically used for value manipulation
        using pointer)
    */

    int c = 20;
    int *pC = &c;
    printf("Value stored in *pC before mod = %d\n",*pC);

    *pC = 25;
    printf("Value stored in *pC after mod = %d\n",*pC);
     




}