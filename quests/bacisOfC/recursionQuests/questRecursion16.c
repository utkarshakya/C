// for question see questRecursion.txt file

#include <stdio.h>

int max(int a, int b){
    if(a<b) return b;
    else return a;
}

int maxInArray(int arr[], int index){
    if(index == 0) return arr[0];
    return max(arr[index], maxInArray(arr, index-1));
}

int main(){
    int arr[] = {31,63,23,4,-327,19,4,5,343,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = size-1;
    printf("The Maximum Number = %d", maxInArray(arr, index));
    return 0;
}