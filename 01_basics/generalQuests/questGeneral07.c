// for question see questGeneral.txt file.

#include <stdio.h>
void main(){
    float principle, rate, time, simpleInterest;
    printf("Enter Principle Value : ");
    scanf("%f", &principle);
    printf("Enter Rate Value : ");
    scanf("%f", &rate);
    printf("Enter Time Value : ");
    scanf("%f", &time);
    printf("Simple Interest = %f", (principle * rate * time) / 100);
}