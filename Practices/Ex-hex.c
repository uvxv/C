/*
Q:
Write the function htoi(s), which converts a string of hexadecimal digits into its equivalent integer value. 
The allowable digits are 0 through 9, a
through f and A through F.
*/



#include <stdio.h>
#include <string.h>
#include <math.h>



void htio( char hexValue[])
{
    int counter;
    int accum;
    int hexPower;

    accum = 0;
    hexPower = 0;

    printf("%s\n",hexValue);

    for(counter = strlen(hexValue)-1; counter >= 0; counter--){
        //printf("%c",hexValue[counter]);
        

        if (hexValue[counter] >= '0' && hexValue[counter] <= '9')
        {
            accum += (pow(16,hexPower))*(hexValue[counter] - '0');
            hexPower++; 
        }
        else if (hexValue[counter] >= 'a' && hexValue[counter] <= 'f')
        {
            accum += (pow(16,hexPower))*(10+(hexValue[counter] - 'a'));
            hexPower++; 
        }
        else if (hexValue[counter] >= 'A' && hexValue[counter] <= 'F')
        {
            accum += (pow(16,hexPower))*(10+(hexValue[counter] - 'a'));
            hexPower++; 
        }
              
       // printf("%02X",(unsigned)hexValue[counter]); // typecasting
    }
    
    printf("the int val of hex %s is %d\n",hexValue,accum);
}


int valid(char hex[]){
    int counter = 0;
    int hexCounter = 0;
    char hexarr[12];


    if ((hex[counter] == '0') && ((hex[counter + 1] == 'x' || hex[counter + 1] == 'X')))
        counter = counter + 2;

    for(counter ; hex[counter] != '\0'; ++counter)
    {
        if((hex[counter] <= 'F' && hex[counter] >= 'A') || (hex[counter] <= '9' && hex[counter] >= '0') || (hex[counter] <= 'f' && hex[counter] >= 'a') )
            {
                hexarr[hexCounter] = hex[counter];
                hexCounter++;
            }    
        else
        {
            printf("Invalid hex\n");
            return 1;
        }
       
    }
    hexarr[hexCounter] = '\0';
    htio(hexarr); 
    return 0;
    
}


int main()
{
 char characters [12];
 
 scanf("%11s",characters);

 valid(characters);

 return 0;

}