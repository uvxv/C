#include <stdio.h>


int main()
{
 int a = 1025;
 unsigned pA;

 pA = &a;

 printf("%d",(int *)&pA);

}