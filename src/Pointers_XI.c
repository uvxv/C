// Function pointers and callbacks
// Similar to wrapper functions where a function takes a pointer to another function


#include <stdio.h>

void A() // A callback function which can be called through fucntion B 
{
    printf("%s\n", "Hello from A");
}

void B(void (*ptrF)() ) // Acts as a wrapper functions
{
    ptrF();
}

int main()
{
    void (*p)() = A;
    B(p);
}