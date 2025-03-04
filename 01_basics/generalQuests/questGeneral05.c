// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int length, breadth, area, parimeter;
    printf("Enter the value of leangth of rectangle : ");
    scanf("%d", &length);
    printf("Enter the value of breadth of rectangle : ");
    scanf("%d", &breadth);
    area = length*breadth;
    parimeter = 2*(length+breadth);
    if (area > parimeter){
        printf("Area will be greater than Parimeter.\n");
        printf("Parimeter = %d and Area = %d", parimeter, area);
    }
    else if (parimeter > area){
        printf("Parimeter will be greater than Area.\n");
        printf("Parimeter = %d and Area = %d", parimeter, area);
    }
    else{
        printf("Aera and Parimeter will be same.\n");
        printf("Parimeter = %d and Area = %d", parimeter, area);
    }
    return 0;    
}