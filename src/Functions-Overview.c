// Function can be declared outside the main() program

/*
FUNCTION FORMAT

return_type func name( paras types and names,......)
    body
    return if exists

*/

#include <stdio.h>

 // Function prototype
/*
in above the function prototype is created cuz the function is created after the main() program,
this tells the compiler a function named 'power' exists which takes two integer paras and returns an integer 

easy way is that creating the func b4 the main() program
*/

int main(){

    int i;

    for(i = 0; i < 10; ++i)
    {
        printf("Power: %d\n %d %d\n", i, power(2,i), power(-3,i));
    }
}

int power(int base,int power) 
{
    int counter, accum;
    accum = 1;

    for(counter = 1; counter <= power ; ++counter) // Loops runs untill a specific power reached (n)
    {
        accum = accum * base;
    }

    return(accum);
}