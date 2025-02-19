#include <stdio.h>

main(){

    int lower, upper, step;
    float fahr, cel;
    lower = fahr = 0;
    upper = 0;
    step = 20;

    printf("Input the mac value: ");
    scanf("%10d", &upper);
    
    while(fahr <= upper){
        cel = (5.0/9.0)*(fahr-32.0);
        printf("fahr: %4.0f ---> cel: %4.0f\n", fahr, cel);
        fahr = fahr + step;
    }
    return 0;
}