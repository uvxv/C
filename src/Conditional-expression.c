#include <stdio.h>

int main(){
    int a = 3;
    int b = 5;

    if (a > b){
        printf("a is grater than b\n");
    }
    else{
        printf("a is less than b\n");
    }

    // using ternary:
    // condition ? ifTrue : ifFalse

    (a > b) ? printf("a is grater than b\n") : printf("a is less than b\n");
}