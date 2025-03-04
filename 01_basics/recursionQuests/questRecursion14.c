// for question see questRecursion.txt file.

#include <stdio.h>
void zigZag(int n){
    if(n==0) return;
    printf("%d", n); // Pre
    zigZag(n-1);
    printf("%d", n); // In
    zigZag(n-1);
    printf("%d", n); // Post
    return;
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    zigZag(n);
}