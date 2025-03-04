// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int c = 0, n;
    printf("Enter any number : ");
    scanf("%d", &n);
    while (n != 0){
        n /= 10;
        c++;
    }
    printf("There are %d digits in your number.", c);
    return 0;
}