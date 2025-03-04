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

    // Initialsing Matrix
    int m1[r][c], m2[r][c];

    // Taking Input Of Marricx 1
    printf("\nEnter The Elements Of First Matrix : \n\n");
    for (int i1 = 0; i1 < r; i1++)
    {
        for (int j1 = 0; j1 < c; j1++)
        {
            printf("m[%d%d] = ", i1, j1);
            scanf("%d", &m1[i1][j1]);
        }
    }

    // Taking Input Of Matricx 2
    printf("\nEnter The Elements Of Second Matrix : \n\n");
    for (int i2 = 0; i2 < r; i2++)
    {
        for (int j2 = 0; j2 < c; j2++)
        {
            printf("m[%d%d] = ", i2, j2);
            scanf("%d", &m2[i2][j2]);
        }
    }

    // Adding Two Matricx
    for (int k = 0; k < r; k++)
    {
        for (int l = 0; l < c; l++)
        {
            m1[k][l] = m1[k][l] + m2[k][l];
        }
    }

    // Printing The Result
    printf("\n");
    printf("Addition Of Your Given Matrices :\n");
    for (int n = 0; n < r; n++)
    {
        for (int o = 0; o < c; o++)
        {
            printf("%d ", m1[n][o]);
        }
        printf("\n");
    }
    return 0;
}