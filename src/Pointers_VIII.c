// Pointers and multi-dimensional arrays 

/*
 
    Simply, arrays inside arrays
    - C handles multi-dimensional differently

        Example:
                char* fruits[] = {"apple", "mango", "Orange" };

    - The reason why fruits array is treated as array of pointers is that the string itself is the character array terminated using \0
    - The string literals are situated in .rodata section, so modification is not possible

*/

#include <stdio.h>

int main()
{
     char* fruits[] = {"apple", "mango", "Orange" };
 
    printf("%p == %p\n", fruits[0], *(fruits + 0)); // Address of the first character of the string mango 
    printf("%p == %p\n", fruits[1], *(fruits + 1));
    printf("%p == %p\n\n", fruits[2], *(fruits + 2));

    printf("%c == %c\n", *(fruits[0]), **(fruits + 0)); // first character of the string apple
    printf("%c == %c\n", *(fruits[1]), **(fruits + 1)); // first character of the string mango
    printf("%c == %c\n\n", *(fruits[2]), **(fruits + 2)); // first character of the string Orange

    printf("%c == %c\n", fruits[0][0], *(fruits[0] + 0 )); // Returns 'a' from apple
    printf("%c == %c\n", fruits[1][0], *(fruits[1] + 0 )); // Returns 'm' from mango
    printf("%c == %c\n", fruits[2][0], *(fruits[2] + 0 )); // Returns 'O' from Orange 

    // Decoding the return type of each expression will make it easy to handle complex expression


}