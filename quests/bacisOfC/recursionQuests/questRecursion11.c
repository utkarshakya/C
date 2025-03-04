// for question see questRecursion.txt file.

#include <stdio.h>

// This one is effective solution due to its O(log(b)) time complexcity.
int power(int a, int b){
    if(b==0) return 1;
    int t = power(a, b/2);
    if(b%2==0) return t*t; // if power is even
    else return t*t*a; // if power is odd
}
int main(){
    int a, b;
    printf("Enter the value of Base (a) : ");
    scanf("%d", &a);
    printf("Enter the value of Power (b) : ");
    scanf("%d", &b);
    printf("%d ^ %d = %d", a, b, power(a,b));
    return 0;
}