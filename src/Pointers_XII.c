// Functions pointers (callbacks)
// Example with bubble sort


#include <stdio.h>
#include <math.h>

int Absolute_compare(int a, int b) // A callback function 1 for bubblesort
{
    if (abs(a) > abs(b)) return 1;
    else return  -1;
}

int Compare(int a , int b)
{
    if (a > b) return -1;
    else return 1;
}

void Bubblesort(int A[], int count, int (*ptrCallback)(int , int))
{
    int i, j , temp;
    for (i = 0 ; i < count ; i++) // i act as a boundry
        for (j = 0 ; j < i ; j++)
        {
            if (ptrCallback(A[j],A[j+1]) > 0)
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
}

int main ()
{
    int i, A[] = {8,3,5,6,7,8,9,4,0};
    Bubblesort(A, 9, Compare);

    for (i = 0 ; i < 9; i++) printf("%d",A[i]);
}