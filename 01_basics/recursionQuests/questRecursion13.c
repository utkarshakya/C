// for question see questRecursion.txt file. (PreInPost) (This will clear the concept of Recursion)

#include <stdio.h>
void pip(int n){
    if(n==0) return;
    printf("Pre %d\n", n);
    pip(n-1);
    printf("In %d\n", n);
    pip(n-1);
    printf("Post %d\n", n);

    return;
}

int main(){
    int n;
    printf("Enter a value of n : ");
    scanf("%d", &n);
    pip(n);
    return 0;
}