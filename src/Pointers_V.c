// Pointers as function arguments - Call by references

/*
     - Typically argumetns are passed as call by value which is the duplicate value is passed into the function
     - So teh modification to the value will not be reflect to the actual value
*/

#include <stdio.h>

void Valuefunc(int i) // para is requesting a value , which is typically passed as a copy
{
     i += 1;
}

void RefFunc(int * i) // para is requesting the address to value , which is typically passed as a copy
{
     *i += 1;
}

int main ()
{
     int value;
     
     value = 1;

     Valuefunc(value);
     printf("After calling Valuefunc(): %d\n",value);

     RefFunc(&value);
     printf("After calling RefFunc(): %d\n",value);

}