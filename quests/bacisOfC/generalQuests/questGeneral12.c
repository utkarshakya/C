// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int n, sum = 0, i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    int terms = n;
    while (n > 0){
        // printf("%d", i);
        sum += i;
        if (i < 0){
            i *= -1;
            i++;
        }
        else{
            i++;
            i *= -1;
        }
        n--;
    }
    printf("The sum of %d terms = %d", terms, sum);
    return 0;
}
// The above code is not efficient so we derive a formula for making it efficient
// if 'n' is even then the sum = -n/2.
// for example: 1-2+3-4+5-6+7-8 has 8 numbers (even) and we can write it as
// (1-2)+(3-4)+(5-6)+(7-8) = (-1)+(-1)+(-1)+(-1) = -4 (as you see -4 = -8/2).
// So for even n we simply use -n/2 to calculate this sum.
// Now for odd value of n sum = -n/2+n (you can check it on paper it is right)
// #include <stdio.h>
// int main(){
//     int n, sum = 0;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     if (n%2!=0) sum = -n/2 + n; // Note here in programming we get n/2 = (n-1)/n (if n is odd) because / operator not give exact answer in decimals.
//     else sum = -(n/2);
//     printf("%d is the sum of the series.", sum);
//     return 0;
// }