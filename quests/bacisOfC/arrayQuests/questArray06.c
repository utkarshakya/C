// for qustion see questArray.txt file.

#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); // this is use to calculate the size of an array
    int narr[size];
    for (int i = 0; i < size; i++)
    {
        narr[i] = arr[size - 1 - i];
    }
    for (int k = 0; k < size; k++)
        printf("%d ", narr[k]);
}