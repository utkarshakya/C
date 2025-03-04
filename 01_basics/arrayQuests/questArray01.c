// for qustion see questArray.txt file.

#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
            arr[i] = arr[i] * 2;
        else
            arr[i] = arr[i] + 10;
    }
    for (int j = 0; j < 7; j++)
        printf("%d ", arr[j]);
    return 0;
}