// Structures and functions 
/*
   Legal assignment on structs are:
            - Copying 
            - Assigning 
            - Taking the address with '&'
            - Acccessing its members

    But structs may not be compared
*/

#include <stdio.h>

struct Point makepoint (int , int);

struct Point
{
    int x ;
    int y ;
};


int main ()
{
    struct Rectangle
    {
        struct Point pt1;
        struct Point pt2;
    };

    struct Rectangle rectangle;

    rectangle.pt1 = makepoint(1,2);
    rectangle.pt2 = makepoint(2,5);

    printf("Point1: %d,%d\nPoint2: %d,%d", rectangle.pt1.x, rectangle.pt1.x, rectangle.pt2.x, rectangle.pt2.y);
}

struct Point makepoint(int var_x , int var_y)
{
    struct Point temp;

    temp.x = var_x;
    temp.y = var_y;

    return temp; // Here the original in the stack frame gets destroyed, and a copy is returned to the caller
}