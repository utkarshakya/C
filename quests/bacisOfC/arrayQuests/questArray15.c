// for qustion see questArray.txt file.

#include <stdio.h>
int main()
{
    int n;

    // Taking Rows and Columns
    printf("Enter The No. Of Rows And Columns Of Square Matrix : ");
    scanf("%d", &n);

    int m1[n][n];

    // Taking Elements Of Matrix
    printf("\nEnter The Elements Of Your Matrix : \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("M[%d%d] = ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Printing Normal Matrix
    printf("\n");
    printf("Your Normal Matrix : \n");
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            printf("%d ", m1[k][l]);
        }
        printf("\n");
    }

    // Transpose Of Matrix
    for (int p = 0; p < n; p++)
    {
        for (int q = p; q < n; q++)
        { // To remove repeted changes we reduce value of column to p.
            if (p != q)
            {
                int temp = m1[p][q];
                m1[p][q] = m1[q][p];
                m1[q][p] = temp;
            }
        }
    }

    // Reversing The Rows Of Transposed Matrix For 90 Degree Rotaion Of Matrix
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n / 2; b++)
        {
            int temp = m1[a][b];
            m1[a][b] = m1[a][n - b - 1];
            m1[a][n - b - 1] = temp;
        }
    }

    // Printing Result Matrix
    printf("\n");
    printf("Now Your Matrix Will Become : \n");
    for (int u = 0; u < n; u++)
    {
        for (int v = 0; v < n; v++)
        {
            printf("%d ", m1[u][v]);
        }
        printf("\n");
    }
    return 0;
}

// Summary : To Rotate The A Matrix 90 Degree First Take The Transpose Of That Matrix Then Reverse That Matrix Row By Row.