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
    int n, r;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);
    printf("Possible number of conbinations are %d", combination(n, r));
}