#include <stdio.h>

int main (){
    // for loop
    int fahr;
    
    for (fahr = 0; fahr <= 100; fahr++ ){
        printf("fahr: %4.1d --> cel: %4.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
    return 0;
}