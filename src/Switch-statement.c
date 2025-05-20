/*
count digits, white spaces, nidigits
*/

#include <stdio.h>

int main(){
    int charac, forcounter, nwhite, nother, ndigits[10];

    nwhite = 0;
    nother = 0;

    // Populate
    for (forcounter = 0; forcounter < 10; forcounter++){
        ndigits[forcounter] = 0;
    }

    while ((charac = getchar()) != EOF)
    {
        switch(charac)
        {
            case '0': // Falls through case 2 even if this case is true
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9': // similar to if ( c == '0' || c == '1'.......)
                    ndigits[charac - '0']++;
                    break;
            case ' ':
            case '\n':
            case '\t':
                    nwhite++;
                    break;
            default:
                    nother++;
                    break;
            
        }

    }

    for (int j = 0; j < 10; j++)
        {
            printf("No. of %d's : %d\n", j, ndigits[j]);
        }

    printf("---------------\n");
    printf("No. of whitespaces : %d\n", nwhite);
    printf("---------------\n");
    printf("No. of Other characters : %d\n", nwhite);

}
