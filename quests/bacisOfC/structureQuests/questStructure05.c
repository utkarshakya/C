// for question see questStructure.c file.

#include <stdio.h>
#include <string.h>

typedef struct date{
    int date;
    int month;
    int year;
} date;

int main(){
    date arr[2];
    for(int i = 0; i < 2; i++){
        printf("Enter Date No. %d :\n", i+1);
        printf("Date : ");
        scanf("%d", &arr[i].date);
        printf("Month : ");
        scanf("%d", &arr[i].month);
        printf("Year : ");
        scanf("%d", &arr[i].year);
        getchar(); // For consuming \n left in the input buffer
    }

    if(arr[0].date == arr[1].date && arr[0].month == arr[1].month && arr[0].year == arr[1].year){
        printf("Equal");
        return 0;
    }
    printf("Unequal");
    return 0;
}

