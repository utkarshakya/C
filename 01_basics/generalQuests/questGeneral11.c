// for question see questGeneral.txt file.

#include <stdio.h>
int main(){
    int userNum = 0, reverseNum = 0, realNum = 0;
    printf("Enter a number : ");
    scanf("%d", &userNum);
    realNum = userNum;
    while (userNum != 0){
        reverseNum *= 10;
        reverseNum += (userNum % 10);
        userNum /= 10;
    }
    printf("Reverse of %d is %d", realNum, reverseNum);
    return 0;
}