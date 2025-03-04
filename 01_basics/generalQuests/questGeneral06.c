// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x coordinate : ");
    scanf("%d", &x);
    printf("Enter the value of y coordinate : ");
    scanf("%d", &y);
    if (x>0 && y>0)
        printf("Your point lies in 1st quadrant.");
    else if (x<0 && y>0)
        printf("Your point lies in 2nd quadrant.");
    else if (x<0 && y<0)
        printf("Your point lies in 3st quadrant.");
    else if (x>0 && y<0)
        printf("Your point lies in 4st quadrant.");
    else if (x==0 && (y<0 || y>0))
        printf("Your point lies on y-axis.");
    else if (y==0 && (x<0 || x>0))
        printf("Your point lies on x-axis.");
    else
        printf("Your point lies on center.");
    return 0;    
}