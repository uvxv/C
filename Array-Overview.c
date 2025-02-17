// Program to count digits, whitespaces, tabs , newline with the use of arrays

#include <stdio.h>

int main(){

    int c, nwhite, nother;
    int ndigits[10]; // Integer array which 4bytes * 10 = 40bytes long
    nwhite = nother = 0;

    for (int i = 0; i < 10; i++) // initialize the array with 0's
    {
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigits[c-'0'];
        /* 
        c - '0' because the in computer the characters are represented in ASCII, but coverted to int cuz we declared c to int
        example if c = 2, the corresponding ascii value is 50. if i was to integrate that directly into the array like ndigits[c], it might have caused
        a segamentation fault

        So, "c - 0" converts the ascii to its integer value like 50-48 = ndigits[2]
        and ++ increments the value located at ndigits[c - 0] by 1
        */
        
        else if (c == ' ' || c == '\n' || c == '\t' )
            ++nwhite;
        else
            ++nother;
        
    }

    printf("--- The Number of occurences ----\n");
    
    for(int i = 0; i < 10; ++i)
    {
        printf("%d --> %d times\n", i, ndigits[i]);
    }

    printf("Other --> %d\n", nother);
    printf("White spaces --> %d\n", nwhite);

    printf("---- END ----\n");
        
}