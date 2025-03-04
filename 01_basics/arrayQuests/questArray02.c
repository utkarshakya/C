// for qustion see questArray.txt file.

#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int osum = 0, esum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
            osum = osum + arr[i];
        else
            esum = esum + arr[i];
    }
    printf("%d", esum - osum);
    return 0;
}