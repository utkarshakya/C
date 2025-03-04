// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int n, f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d = ", n);
    for(int i = n; i > 0; i--){
        f *= i;
        if(i>1) printf("%d*", i);
        else printf("%d", i);
    }
    printf(" = %d", f);
    return 0;   
}