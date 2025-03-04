// for question see questRecursion.txt file.

#include <stdio.h>

int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int k = 1; k <= n-i; k++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf("%d ", combination(i,j));
        }
        printf("\n");
    }
}