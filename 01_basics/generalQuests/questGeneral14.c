// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int n, f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        f *= i;
        printf("%d! = %d\n", i, f);
    }
    return 0;   
}