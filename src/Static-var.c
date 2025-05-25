/*
There are two types of static variables:
    1. Internal static variables (inside a function)
    2. External static variable (defined outside a function)

INTERNAL STATIC VAR:
    - unlike the automatic var which get destriyed when the function returns or when the end of the bloch is reached, the static variables
      inside a fuction holds a permenant place in the stack even though the function returns, the statics lives the BSS segment in the file.

EXTERNAL STATIC VAR:
    - The exteranl static variables which defined outside the function remain invisible to the linker which means remains visible only to that 
      particular translation unit (source unit). 
    - The external static variables cannot be used in other source files.

In C , static connotates/suggests not only permananes but also privacy.
*/

#include <stdio.h>

static char external = 'd';

int main(){
    static char internal = 'c';

}