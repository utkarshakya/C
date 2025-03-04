// for question see questRecursion.txt file.

// 1st Method

// #include <stdio.h>
// int sum(int n){
//     if(n == 1) return 1;
//     int a = 0;
//     a = n + sum(n-1);
//     return a;
// }
// void main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("%d",sum(n));
// }

// 2nd Method

#include <stdio.h>
int sum(int n){
    if(n == 1 || n == 0) return n;
    return n + sum(n-1);
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum of numbers form 1 to %d = %d",n ,sum(n));
}