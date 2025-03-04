// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}