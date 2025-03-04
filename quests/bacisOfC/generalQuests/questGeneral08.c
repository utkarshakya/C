// for question see questGeneral.txt file.

#include <stdio.h>
void main(){
    // taking input.
    float sPrice, cPrice, profit, loss;
    printf("Enter the value of Cost Price : ");
    scanf("%f", &cPrice);
    printf("Enter the value of Selling Price : ");
    scanf("%f", &sPrice);
    profit = ((sPrice - cPrice) / cPrice) * 100;
    loss = ((cPrice - sPrice) / cPrice) * 100;
    if (sPrice > cPrice)
        printf("You made a profit of %f percent (%f rupees).", profit, sPrice - cPrice);
    else if (cPrice > sPrice)
        printf("You incured a loss of %f percent (%f ruppes).", loss, cPrice - sPrice);
    else
        printf("You don't make any profit or loss.");
}