#include <stdio.h>

int main(){
    int i;
    int j;
    int k;

    i = 25;
    j = i;
    k = i;

    printf("j++ before = %d\n",j++); // use first, then increment and assign
    printf("j++ after = %d\n",j);
    printf("---------------\n");
    printf("++k before = %d\n",++k); // increment and assign first, the use
    printf("++k after = %d\n",k);
}