/* String concat program, and more about arrays:
    - Arrays are not assignable
    - in the context declaration and initialization at same time the size can either be provided or not */
#include <stdio.h>

int main(){
    char arr1[20] = {'i','m','r','a','n','\0'};
    char arr2[11] = {'j','i','n','n','a','h','\0'};

    int i;
    int j;

    i = j = 0;

    while(arr1[i] != '\0')
        i++;
    while((arr1[i++] = arr2[j++]) != '\0')
        ;

    printf("%s",arr1);

}