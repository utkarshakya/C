// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a = 1, d = a+64;
        for(int j=1; j<=i; j++){
            if(i%2==0){
                printf("%c ", (char)d);
            }
            else{
                printf("%d ", a);
            }
            a += 1;
            d += 1;
        }
        printf("\n");
    }
}