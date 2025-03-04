#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int arr[n][n];
    int top, bottom, left, right;
    top = left = 0;
    bottom = right = n - 1;
    int i = 0;
    int count = 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = count;
            count++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            arr[i][right] = count;
            count++;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            arr[bottom][i] = count;
            count++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            arr[i][left] = count;
            count++;
        }
        left++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
            printf("\n");
    }
    return 0;
}