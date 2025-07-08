// Typedef is user defined alias/new names for data types for a declaration 
// Helps to simplify the code during a complex decalaration (structs included)


#include <stdio.h>

void Print(int x , int y)
{
    printf("%d , %d", x, y);
}


int main()
{
    typedef void (*ptrFunc)(int, int); // 'ptrFunc' if the new name for the type 'void (*)(int,int)'

    ptrFunc pp = Print;

    pp(1,2);
}