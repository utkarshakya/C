// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int num = 0;
    for (int i = 1; i <= 2*n-1; i++){
        for (int j = 1; j <= 2*n-1; j++){
            int a = i;
            if (a >= n) a = 2*n - i;
            int b = j;
            if (b >= n) b = 2*n - j;
            if (a<b) num = a;
            else num = b;
            printf("%d ", n+1-num);
        }
        printf("\n");
    }
}