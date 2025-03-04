// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n, a;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    a = n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= a; j++)
            printf("* ");
        printf("\n");
        a--;
    }
}