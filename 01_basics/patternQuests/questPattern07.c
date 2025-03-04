// for question see questPattern.txt file.

#include <stdio.h>
void main(){
    int rows, cols;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(i==1 || j==1 || i==rows || j==cols){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}