// for question see questRecursion.txt file.

#include <stdio.h>
int power(int a, int b){
    if(b == 0) return 1;
    return a * power(a, b-1);
}
int main(){
    int a;
    printf("Enter the value of Base : ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of Power/Exponent : ");
    scanf("%d", &b);
    if(b < 0) printf("Please Enter a Positive Exponent. We did not solve numbers with negative power, Sorry for inconvience ):");
    else printf("%d^%d = %d", a, b, power(a, b));
    return 0;
}