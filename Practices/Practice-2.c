// File copying

/*
PSUEODO CODE

- Get a character from the keyboard
- Ouput the character to terminal
- Get a new character again

*/

#include <stdio.h>

int main(){

    int c = getchar();

    while(c != -1){
        putchar(c);
        c = getchar();
    }

}