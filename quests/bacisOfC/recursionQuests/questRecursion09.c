// for question see questRecursion.txt file.

#include <stdio.h>
int stair();
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("No of ways = %d", stair(n));
    return 0;
}
int stair(int s){
    if(s==1 || s==2) return s;
    return stair(s-1) + stair(s-2);
}