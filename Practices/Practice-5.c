// Word counting 

#include <stdio.h>

#define YES 1
#define NO 0

int main(){
    int c, nl, nw,nc, inword;

    inword = NO;

    nc = nw = nl = 0;

    while ((c = getchar()) != EOF){
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\t' || c == '\n'){
            inword = NO; // If the input is space, tab or newline, set the inword to NO
            
        }
        else if (inword == NO ){
            inword = YES; // When it not a space,...,... also we were not in a word previosly, set the inword to NO
            ++nw; // An recognise it as a new word
        }

    }

    printf("No. of words: %d\nNo. of new line: %d\nNo.of characters: %d\n",nw,nl,nc);
    return 0; 
}

