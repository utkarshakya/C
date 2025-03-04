// for question see questRecursion.txt file.

#include <stdio.h>
int maze(int n, int m){
    int rightWays = 0, downWays = 0;
    if(n==1 && m==1) return 1; // we reached the destination
    if(n==1) rightWays = maze(n,m-1); // we can only go in Right direction
    if(m==1) downWays = maze(n-1,m); // we can only go in Down direction
    if(n>1 && m>1){
        rightWays = maze(n,m-1);
        downWays = maze(n-1,m);
    }
    return rightWays + downWays;
}
int main(){
    int n,m;
    printf("Enter number of Rows of the Grid : ");
    scanf("%d", &n);
    printf("Enter number of Columns of the Grid : ");
    scanf("%d", &m);
    printf("Total number of possible ways = %d", maze(n,m));
    return 0;
}