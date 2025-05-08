// A program to get the lines, save and print the longest line

#include <stdio.h>
#define MAX 1000 // maximum chars per line

int get_line(char [], int); // Prototype
void copy (char [], char[]);

int main()
{
  int len; // current line length
  int max; // max length updated
  char line[MAX]; // Current input line 
  char save[MAX]; // Save the longest line

  max = 0;

  while((len = get_line(line, MAX)) > 0)
  {
    if (len > max) // check for which is longer
    {
        max = len; 
        copy(line,save); // If the current input longer the last, save it
    }
  }

  if (max > 0) // To verify whether the last input is a line (useful when the program terminated at the beginning)
  {
    printf("---- The logest line ----\n");
    printf("%s", save);
    printf("---- End ----\n");
  }
}

int get_line (char charac[] ,int lim)
{
  int getcha,counter;

  for(counter = 0; counter < lim-1 && ( (getcha = getchar()) != EOF &&  getcha != '\n' ); ++counter) // Runs on three conditions
    charac[counter] = getcha; // Append the character
  
  if( getcha == '\n') // Append thhe \n which is not added due loop termination
  {
    charac[counter] = getcha;
    ++counter;
  }
  
  charac[counter] = '\0'; // Mark the end of the string
  return (counter);
  
}

void copy (char arr[], char arr2[]) // "void" type which dosen't return anything, arr and arr2 decays to *arr and *arr2 which is a pointer eventually making it a call by reference
{
  int counter;

  counter = 0;

  while((arr2[counter] = arr[counter]) != '\0') // copy untill the last character from the arr1 is \0
    ++counter;
}
