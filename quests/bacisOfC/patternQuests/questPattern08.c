// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter any odd number : ");
    scanf("%d", &n);
    int a = 1, b = n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==a || j==b){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        a += 1;
        b -= 1;
    }
}