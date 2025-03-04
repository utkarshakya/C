// for question see questGeneral.txt file.

#include <stdio.h>
int main()
{
    int n, f1 = 0, f2 = 1, f3 = 0;
    printf("Enter a value of n : ");
    scanf("%d", &n);
    if (n >= 3){
        printf("0 1");
        for (int i = 1; i <= n-2; i++){
            f3 = f1 + f2;
            printf(" %d", f3);
            f1 = f2;
            f2 = f3;
        }
    }
    else{
        if (n == 1)
            printf("0");
        else if (n == 2)
            printf("0 1");
        else
            printf("INVALID INPUT !");
    }
return 0;
}