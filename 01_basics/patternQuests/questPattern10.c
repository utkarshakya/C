// for question see questPattern.txt file.

// 1st Method
// #include <stdio.h>
// void main(){
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     int a;
//     for(int i=1; i<=n; i++){
//         if(i%2==0) a = 0;
//         else a = 1;
//         for(int j=1; j<=i; j++){
//             printf("%d ", a);
//             if(a == 1) a = 0;
//             else a = 1;
//         }
//         printf("\n");
//     }
// }

// 2nd Method
#include <stdio.h>
void main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) printf("1 "); // since when i+j is even then it is 1
            else printf("0 ");
        }
        printf("\n");
    }
}