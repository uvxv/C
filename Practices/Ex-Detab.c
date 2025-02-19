/*
Q: Write a program that replaces tabs in the input with the appropriate number of spaces to reach the next tab stop. 
   Assume fixed tab stops at every n positions.
*/

#include <stdio.h>
#define TAB_SPACE 4

void detab();

int main()
{
    detab();
    return 0;
}

void detab()
{
    int getcha, position;

    position = 0;
    while((getcha = getchar()) != EOF)
    {
        if (getcha == '\t')
        {
            int space = TAB_SPACE - (position % TAB_SPACE); // Tab spaces goes as 0,4,8,12 positions, the variable use to calc teh next tab position reletively
            for (int i = 0; i < space; ++i )
            {
                putchar(' ');
                ++position;
            }
                
        }
        else 
        {
            putchar(getcha);
            ++position;

        }

        if (getcha == '\n')
            position = 0;
    }
}