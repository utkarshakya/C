// for question see questRecursion.txt file.

#include <stdio.h>
int fibo(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    if(n < 1)
        printf("INVALID INPUT ! Please enter a valid number. ");
    else
        printf("Your Fibonacci Number is %d", fibo(n));
    return 0;
}