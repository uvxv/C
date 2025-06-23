// Pointers and 3-dimensional arrays 

#include <stdio.h>

void FunA (int (*val)[2][2]) // also be written as ' int val[][3] '
{ printf("Parameter declaration works\n"); }

void FunB (int *val) // also be written as ' int val[] '
{ printf("Parameter declaration works\n"); }

void FunC (int (*val)[3]) // also be written as ' int val[][3] '
{ printf("Parameter declaration works\n"); }


int main()
{
    int A[3][2][2] = { {{1,2} , {3,4}} , {{5,6},{7,8}} , {{9,10},{11,12}} };
    int B[2] = {13,14};
    int C[2][3] = {{15,16,17},{18,19,20}};

    FunA(A);
    FunB(B);
    FunC(C);


}