// Pointer arithmatics
// Pointer arrithmatics are useful when it comes to traversing an array

#include <stdio.h>

int main ()
{
    int a; // interger types which are 4byte
    int *pA; // pointer types which 8bytes / 4bytes based to the wordlength 

    pA = &a; // pointer to the first address of the 4bytes

    printf("pA pointed to the address %X\n", pA);
    printf("pA+1 pointed to the address %X\n", pA+1); // Danger, can go beyond teh bound
    printf("---------------------\n");


    /*
     - In the above the teh pointer arithmatic move up and down 4, 4 bytes because its a interger type pointer
    */

    // But....

    /*
     - The aritmaatic of & behaves diffrently in &pA (which is a pointer and 8\4 bytes in length), &pA+1 whill give the starting address of the next 8 bytes.a
    */

    printf("&pA(address of the pointer) : %X\n", &pA); 
    printf("&pA+1 : %X\n", &pA+1); // Danger can go beyond the bound
    printf("size of the pointer : %dbytes\n", sizeof(int));
    printf("size of the interger : %dbytes\n", sizeof(int*));
    

}