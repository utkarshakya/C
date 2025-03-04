// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    float num;
    printf("Enter a float number : ");
    scanf("%f", &num);
    printf("%f", num - (int)num); // explicit convertion
    return 0;
}