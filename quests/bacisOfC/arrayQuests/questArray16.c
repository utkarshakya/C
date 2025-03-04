// for question see queatArray.txt file.

#include <stdio.h>
int main()
{
    int m, n, p, q; // m*n are the rows and columns of matrixA and p*q for matrixB.

    // No. of rows and columns of matrixA.
    printf("How Many Rows Are In Your 1st Martix : ");
    scanf("%d", &m);
    printf("How Many Columns Are In Your 1st Martix : ");
    scanf("%d", &n);
    // No. of rows and columns of matrixB.
    printf("\nHow Many Rows Are In Your 2nd Martix : ");
    scanf("%d", &p);
    printf("How Many Columns Are In Your 2nd Martix : ");
    scanf("%d", &q);

    if (n != p)
    {
        printf("Matrix Multipication is not possible, Since %d is not equal to %d", n, p);
        return 0;
    }

    // Taking input for matrixA.
    int matrixA[m][n];
    printf("\n\nEnter The Elements Of Matrix A : \n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Taking input for matrixB.
    int matrixB[p][q];
    printf("\n\nEnter The Elements Of Matrix B : \n\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Matrix Multiplication.
    int matrixR[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            matrixR[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrixR[i][j] += matrixA[i][k] * matrixB[k][j];
                // this one is the main condition, since every row element of 1st matrix is multiplied by ever column element of 2nd matrix one by one and then added together to get the element of the resultant metrix at ith row and jth column.
            }
        }
    }

    // Printing The Result.
    printf("\nResultant Matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", matrixR[i][j]);
        }
        printf("\n");
    }

    return 0;
}