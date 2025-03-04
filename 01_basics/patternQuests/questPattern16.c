// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int stars = n-1, spaces = 1;

    for (int f = 1; f <= n*2-1; f++) // only for first line
    {
        printf("* ");
    }
    printf("\n");
    for(int i = 1; i <= n-1; i++){
        for(int k = 1; k <= stars; k++)
                printf("* ");
        for(int j = 1; j <= spaces; j++) // for printing leading spaces
            printf("  ");
        for(int k = 1; k <= stars; k++)
                printf("* ");
        spaces+=2;
        stars--;
        printf("\n");
    }
}