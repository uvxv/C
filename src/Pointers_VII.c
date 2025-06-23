// Characters arrays and pointers

/*
    - In C/C++ , the strings are treated as the array of characters
    - The size of the character string is the no.of characters + \0 (which is the string null terminator)
    - Arrays are always passed to function by as reference
*/

#include <stdio.h>

int main()
{
    char str[] = "Hello world"; // str is array of which contains the words
    char *pStr = "Hello world"; // Unlike the above, the pStr is a dedicated variable which points to the first element in the "Hello world" which is located in teh .rodata section
    // The pStr string cannot be modified
}
