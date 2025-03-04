// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int stars = 1, spaces = n/2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= spaces; j++) // for printing leading spaces
            printf("  ");
        for(int k = 1; k <= stars; k++)
                printf(" *");
        if (i >= (n+1)/2){
                spaces++;
                stars-=2;
            }
            else{
                spaces--;
                stars+=2;
            }
        printf("\n");
    }
}