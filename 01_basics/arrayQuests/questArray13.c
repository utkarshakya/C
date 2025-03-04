// for qustion see questArray.txt file.

#include <stdio.h>
int main()
{
    int r, c;

    // Taking Rows and Columns
    printf("Enter the no. of rows of matrix : ");
    scanf("%d", &r);
    printf("Enter the no. of columns of matrix : ");
    scanf("%d", &c);

    int m1[r][c];
    int m2[r][c];

    // Taking Elements Of Matrix 1
    printf("\nEnter The Elements Of Your Matrix : \n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("M[%d%d] = ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Printing The Normal Matrix
    printf("\n");
    printf("Your Normal Matrix : \n");
    for (int n = 0; n < r; n++)
    {
        for (int o = 0; o < c; o++)
        {
            printf("%d ", m1[n][o]);
        }
        printf("\n");
    }

    // Creating And Storing The Transpose Of Matrix In Another Matrix
    for (int p = 0; p < c; p++)
    {
        for (int q = 0; q < r; q++)
        {
            m2[p][q] = m1[q][p];
        }
    }

    // Printing The Transpose Of Matrix
    printf("\n");
    printf("Your Matrix Transpose : \n");
    for (int n = 0; n < c; n++)
    { // just change the row and colume everwhere in the for loop
        for (int o = 0; o < r; o++)
        {
            printf("%d ", m2[n][o]);
        }
        printf("\n");
    }
    return 0;
}