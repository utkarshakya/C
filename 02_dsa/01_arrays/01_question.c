// Write a C program that finds the maximum element in an array?

#include <stdio.h>

int main()
{

    int arr[5] = {10, 29, 19, 99, 21};
    int maxNumber = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if(arr[i] > maxNumber){
            maxNumber = arr[i];
        }
    }

    printf("Maximum Number is %d", maxNumber);

    return 0;
}