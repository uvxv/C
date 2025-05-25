/*
Sort v[0]......v[n-1] into increasing order
*/

#include <stdio.h>


 int* shell_sort(int v[], int high ){
    int gap, i , j, temp;

    for (gap = high/2 ; gap > 0 ; gap /= 2 )
    {
        for(i = gap ; i < high; i++)
        {
            for ( j = i - gap ; j >=0 && v[j] > v[j+gap] ; j -= gap)
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}

int main()
{
    int arr1[] = {'68','34','100','25','15','43','99'};
    int *pX = shell_sort(arr1,7);

     
}



    
   
