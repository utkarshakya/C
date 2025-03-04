// for qustion see questArray.txt file.

#include <stdio.h>
void main()
{
    int x;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("Enter the value of x : ");
    scanf("%d", &x);
    int totalPairs = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (x == arr[i] + arr[j])
            {
                printf("(%d,%d)\n", arr[i], arr[j]); // this will print all possible combinations
                totalPairs++;
            }
        }
    }
    printf("Total possible pairs are %d.", totalPairs);
}