#include<stdio.h>
#include <math.h>
#include <string.h>



void convert(char hexValue[])
{
    int counter;
    int accum;
    int hexPower;

    accum = 0;
    hexPower = 0;

    for (counter = strlen(hexValue)-1; counter >=0; counter--)
    {

        if (hexValue[counter] == '\n')
        {
            continue;
        }
        else if(hexValue[counter] >= '0' && hexValue[counter] <= '9')
        {
            accum += (pow(16,hexPower)*(hexValue[counter]-'0'));
            hexPower++;
        }
        else if(hexValue[counter] >= 'a' && hexValue[counter] <= 'f')
        {
            accum += (pow(16,hexPower)*(hexValue[counter]-'a'));
            hexPower++;
        }
        else if(hexValue[counter] >= 'A' && hexValue[counter] <= 'F')
        {
            accum += (pow(16,hexPower)*(hexValue[counter]-'A'));
            hexPower++;
        }

    printf("The value of %s is %d",hexValue,accum);
    }
}

int valid(char hexArr[])
{
    int counter;
    int hexcounter;
    char hexstr[12];

    counter = 0;
    hexcounter = 0;

   


}