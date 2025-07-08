// Earlier struct are been passed to fucntion, but this not vaible when dealing with larger struct
// So pointer is so

#include <stdio.h>

int main()
{
    struct Point
    {
        int x;
        int y;
    };
    
    struct Point pt1, *ptrPt1;

    pt1.x = 1;
    pt1.y = 6;

    ptrPt1 = &pt1;

    printf("pt1.x : %d = pt1.x : %d ", (*ptrPt1).x, ptrPt1 -> x);

    // here '(*ptrPt1).x' is same as 'ptrPt1 -> x'



}