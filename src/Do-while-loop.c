// Loop condition tested at the bottom

#include <stdio.h>

void itoa (char s[], int n){ // Convert n to characters in s

    int i , sign;

    sign = n; // records teh sign
    i = 0;

    if (sign < 0)
        n = -n; // make n positive
    
    do { // generate digits in reverse order

        s[i++] = n % 10 + '0'; // Example 234%10 will give the remainder of 4 (which can also intepreted as the least significant digit in base 10)


    } while ((n/=10) > 0); // Example 234/10 will give 23 without the remainder of 4 (which can also intepreted as chopping if the last digit in base 10)

    if(sign < 0)
        s[i++]= '-';
    
    s[i] = '\0';
    //reverse(s);

}
