// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++) // for printing leading spaces
            printf("  ");
        for(int k = 1; k <= i*2-1; k++)
            printf(" *");
        printf("\n");
    }
}