#include <stdio.h>


int main (){
    // String input
    char name[50];
    printf("Enter a name: ");
    scanf("%50s", name); // The %50s enforces a str limit upto 50 char, so it will read only 50 char
    // Scanf stops at spaces

    printf("%s",name);  
}