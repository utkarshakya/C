// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a integer number : ");
    scanf("%d", &num);
    printf("%f", num/2.0); // implicit conversion
    return 0;
}