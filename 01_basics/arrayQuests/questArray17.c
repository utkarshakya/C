// for question see questArray.txt file.

#include <stdio.h>
int main()
{

    // minRow and minCol is 1st Row and Column, and Max is last one respectively.
    int minRow = 0, minCol = 0, maxRow, maxCol;

    printf("Enter the number of rows : ");
    scanf("%d", &maxRow);
    printf("Enter the number of columns : ");
    scanf("%d", &maxCol);
    if (maxRow <= 1 || maxCol <= 1)
    {
        printf("): Invalid Input, For Spiral Printing Row and Column Must Be Grater Than One.");
        return 0;
    }

    int arr[maxRow][maxCol];
    int totalElements = maxRow * maxCol;
    int num = 1;
    int pRow = maxRow, pCol = maxCol; // we use these while printing an array.

    while (num < totalElements)
    {
        // for printing top row.
        for (int i = minCol; i < maxCol; i++)
        {
            arr[minRow][i] = num;
            num++;
        }
        minRow++;

        // for printing right column.
        for (int i = minRow; i < maxRow; i++)
        {
            arr[i][maxCol - 1] = num;
            num++;
        }
        maxCol--;

        // for printing last row.
        for (int i = maxCol - 1; i >= minCol; i--)
        {
            arr[maxRow - 1][i] = num;
            num++;
        }
        maxRow--;

        // for printing left column.
        for (int i = maxRow - 1; i >= minRow; i--)
        {
            arr[i][minCol] = num;
            num++;
        }
        minCol++;
    }

    // printing the result.
    for (int i = 0; i < pRow; i++)
    {
        for (int j = 0; j < pCol; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}