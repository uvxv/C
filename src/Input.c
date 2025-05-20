#include <stdio.h>


int main (){
    // Input
    int sqrt, answer;
    printf("Enter the the number: ");
    scanf("%d", &sqrt); // & for call by reference of the address of the sqrt varible , so that it can manipultate
    answer = sqrt * sqrt;
    printf("the answer is : %d", answer);
    
}