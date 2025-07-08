// Pointers to Functions

#include <stdio.h>

void Print(char * ptr)
{
    printf("%s\n",ptr);
}

int main()
{
    void (*ptrA)(char*);
    void (*ptrB)(char*);

    char string[] = "imran";

    ptrA = &Print;
    ptrB = Print; // ..Will also give teh entry point address of the Print Func 

    (*ptrA)(string); // Since the ptrA stored the address, deref will return the fucntion and then call..
    ptrB(string);

}