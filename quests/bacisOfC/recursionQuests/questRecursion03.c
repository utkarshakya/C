// for question see questRecursion.txt file.

#include <stdio.h>
void fab(int n){
    if (n > 2){
        printf("0 1");
        int f1 = 0, f2 = 1, f3;
        for(int i = 0; i <= n-2; i++){
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            printf(" %d", f3);
        }
    }
    else if(n == 2) printf("0 1");
    else if(n == 1) printf("0");
    else printf("Invalid Input!");
}
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    fab(n);
}