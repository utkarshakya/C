// for qustion see questArray.txt file.

#include <stdio.h>
void main()
{
    int arr[7] = {1, 2, 3, 4, 4, 2, 1};
    int largest = arr[0];
    int secLargest = arr[1];
    for (int i = 1; i < 7; i++)
    {
        if (largest < arr[i])
        {
            secLargest = largest;
            largest = arr[i];
        }
    }
    printf("The second largest number is %d", secLargest);
}