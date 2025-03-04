// for question see questRecursion.txt file.

#include <stdio.h>
void incresing(int n){
    if (n < 1) return;
    incresing(n-1);
    printf("%d ", n);
    return;
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    incresing(n);
}