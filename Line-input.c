#include <stdio.h>


int main (){
    // Line input
    char line[1000];
    printf("Enter a line: ");
    scanf(" %[^\n]1000s", line); // This says that scan the word untill the new line is triggered
    printf("Line 1 : %s\n", line);

    // Line input (Read safe)
    char line2 [1000];
    printf("Enter a line: ");
    fgets(line2, 1000, stdin); // Stdin is a type of file handle, stores in the first para
    printf("Line 2: %s", line2);

    return 0;


    /* 
    The second code might be a hassle because how input buffer is consumed between two functions,
    The scanf() reads the input buffer untill the \n , and drop the \n in the buffer itself
    So, when the fgets() reads untill a \n is consumed , so as the left over \n in consumed from the input buffer,
    fgets() assumes its the end of the line and exits the functions. 
    */

}
