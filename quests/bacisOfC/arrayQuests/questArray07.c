// for qustion see questArray.txt file.

#include <stdio.h>
void main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}