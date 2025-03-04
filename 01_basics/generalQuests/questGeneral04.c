// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    // Taking required inputs.
    int divisor, dividend, quotient, remainder;
    printf("Enter the value of Dividend : ");
    scanf("%d", &dividend);
    printf("Enter the value of Divisor : ");
    scanf("%d", &divisor);
    // Finding remainder and printing output.
    quotient = dividend/divisor; // due to int type it not go to decimal but give quotient.
    remainder = dividend - (divisor*quotient); // dividend = divisor*quotient + remainder.
    printf("When %d is divided by %d Remainder will be %d", dividend, divisor, remainder);
    return 0;
}