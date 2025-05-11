/*
Commas and semi-colons can be used in the header of the loop 
*/

#include <stdio.h>

int main(){
    int i;
    int j;

    for(i = 10,j = 0; i >= 0 ; i-- , j++){
        printf("%d\n",j);
    }

    /*
    The first section of teh loop header (seperated by , to ;)
        - says the things to do at the beginning of the loop

    The second section of teh loop header (seperated by , to ;)
        - Condition statemets
    
    The second section of teh loop header (seperated by , )
        - says the things to do at the ends of the loop

    THIS METHOD IS A TRADEOF BETWEEN READABILITY AND BREVITY
    */


    // also

    int c;

    // lets mess with precedence inside while

    while ((c = getchar()) == ' ' || c == '\t' || c == 'e' || c == '\n' )
        printf("%c",c); 
}