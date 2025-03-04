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

    int m[r][c];
    int add = 0;

    // Taking Input Of Matrix 1
    printf("\nEnter The Elements Of Your Matrix : \n\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("M[%d%d] = ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Adding All Elements Of Matrix
    for (int k = 0; k < r; k++)
    {
        for (int l = 0; l < c; l++)
        {
            add += m[k][l];
        }
    }

    // Printing The Result
    printf("\n");
    printf("Your Matrix : \n");
    for (int n = 0; n < r; n++)
    {
        for (int o = 0; o < c; o++)
        {
            printf("%d ", m[n][o]);
        }
        printf("\n");
    }
    printf("Sum Of All The Elements Of Your Matrix = %d (:", add);
    return 0;
}