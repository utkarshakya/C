// for question see questRecursion.txt file.

#include <stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return 4; //when we are 3 stairs away form the top most one then there are 4 ways to go.
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
    int n;
    printf("Enter the number of ways : ");
    scanf("%d", &n);
    printf("No of ways = %d", stair(n));
}