// for qustion see questArray.txt file.

#include <stdio.h>
void main()
{
    int x;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("Enter the value of x : ");
    scanf("%d", &x);
    int totalTriplets = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            for (int k = j + 1; k < 7; k++)
            {
                if (x == arr[i] + arr[j] + arr[k])
                {
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]); // this will print all possible combinations
                    totalTriplets++;
                }
            }
        }
    }
    printf("Total possible triplets are %d.", totalTriplets);
}