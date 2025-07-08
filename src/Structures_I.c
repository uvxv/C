// Structures are collections of one or more variables
// Structs are list of declarations enclosed braces
// Structs are user difined data types that embodies multiple variables
// Struct members are typically padded to boundry of 4/8bytes depending on the architecture

#include <stdio.h>

int main()
{
    struct Point // "Point" is called as a structure tag
    {
        //members
        int x;  // 4bytes + no padding
        int y; // 4bytes + no padding
    } pt1, pt2; // Total 8bytes for struct

    struct Point pt3 = {2,4}; // Aggregate initialization
    struct Point pt4;

    pt4.x = 4; // Direct field assignment
    pt4.y = 7;

    // NESTED STRUCTURES

    struct Rectangle
    {
        struct Point point1;
        struct Point point2;
    };
    

    struct Rectangle rectangle = {{2,4},{7,6}};
    struct Rectangle rectangle2;

    rectangle2.point1.x = 2;
    rectangle2.point1.y = 4;

    rectangle2.point2.x = 7;
    rectangle2.point2.y = 6;



}

