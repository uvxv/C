// Pointer to pointer

#include <stdio.h>

int main()
{
    int a;
    int* pA;
    int** pB;
    int*** pC;

    a = 1024;
    pA = &a;
    pB = &pA;
    pC = &pB;
    
    printf("deref *pA : %d\n",*pA );
    printf("deref **pA : %d\n",**pB );
    printf("deref ***pC : %d\n",***pC );
    

}