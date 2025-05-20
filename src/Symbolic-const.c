#include <stdio.h>

/* A symbolic name for constants */

#define LOWER 0
#define UPPER 200
#define STEP 20

int main (){

    int fahr;

    for( fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("fhar: %4d --> celcius: %4.2f\n",fahr, (5.0/9.0)*(fahr - 32.0));
    }
}