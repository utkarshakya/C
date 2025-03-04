// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int a = 65;
        for(int j=1; j<=n; j++){
            printf("%c ", (char)a);
            a += 1;
        }
        printf("\n");
    }
}