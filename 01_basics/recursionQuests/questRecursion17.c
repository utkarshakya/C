// for question see questRecursion.txt file.

#include <stdio.h>

int sum(int arr[], int lastIndex){
    if(lastIndex == 0) return arr[0];
    return arr[lastIndex] + sum(arr, lastIndex-1);
}

int main(){
    int sizeOfArray;
    printf("\nEnter The Size Of The Array : ");
    scanf("%d", &sizeOfArray);

    int arr[sizeOfArray];
    printf("\n-- ENTER THE ELEMENTS OF THE ARRAY --\n");
    for(int i = 0; i < sizeOfArray; i++){
        printf("   ENTER ELEMENT NO. %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    int lastIndex = sizeof(arr)/sizeof(arr[0]) - 1;
    printf("\nThe Sum Of All The Elements Of The Given Array = %d\n\n", sum(arr, lastIndex));

    return 0;
}