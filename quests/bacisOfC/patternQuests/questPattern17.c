// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int num = n-1, spaces = 1;
    for (int f = 1; f <= n*2-1; f++) // only for first line
    {
        printf("%d ", f);
    }
    printf("\n");
    for(int i = 1; i <= n-1; i++){
        int e = 1;
        for(int k = 1; k <= num; k++){
            printf("%d ", e);
            e++;
        }
        for(int j = 1; j <= spaces; j++){  // for printing leading spaces
            printf("  ");
            e++;
        }
        for(int k = 1; k <= num; k++){
            printf("%d ", e);
            e++;
        }
        spaces+=2;
        num--;
        printf("\n");
    }
}