// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n, m;
    printf("Enter any odd number : ");
    scanf("%d", &n);
    m = (n+1)/2; // m is the middle value of given odd input
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==m || j==m){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}