// Pointers and arrays

/*
    - The concept of arrays and pointers are related to each other 
    - Due to their similarity, they often get confused.


    - In programming terms, Pointers is a variable which stores the address of another variable.
    - Array is named lable given to the sequence of addresses( which stores the elements)
        - The name of the array itself is the address (or pointer) to the first element.
          exampele:
                    a[10] (in declaration) --> decays to --> &a[0] (in expression)
    
    Note:
        Remember array is not a dedicated variable which stores the address of a[0] element
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Array declaration
    int arr[10];
    
    // Print the address of the array and the address of the first element  
    printf("%p == %p\n", arr, &arr[0]);
    
    // Fake array using alloca (stack allocation)  
    int *ptr = alloca(sizeof(int) * 10); // Automatiaclly de-allocate (freed) the function that called returned
    
    // Assign values to the fake array  
    *(ptr + 0) = 42;  
    *(ptr + 1) = 1337;
    *(ptr + 2) = -21;

    printf("%p ",&arr ); // address of a variable Whole array
    printf("%p\n",arr); // address of the int *arr (first element)

    printf("%p ",&arr+1); // jump array by array
    print("%p\n",arr+1); // jumps int by int (*arr+1)

    printf("%p ",&ptr); // Address of the ptr variable
    printf("%p\n",ptr); // Address stored in the ptr

    printf("%p",&ptr+1);
    printf("%p",ptr+1);return 0;
}