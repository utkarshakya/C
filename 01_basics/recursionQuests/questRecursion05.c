// for question see questRecursion.txt file.

#include <stdio.h>
void decresing(int n){
    if (n < 1) return;
    printf("%d ", n);
    decresing(n-1);
    return;
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    decresing(n);
}