// for question see questPointer.txt file.

#include <stdio.h>
int main(){

    int num = 45;
    int *ptr = &num;

    printf("%p\n", ptr);
    printf("%p\n", --ptr);
    printf("%p\n", ptr++); // These also wrok in same as with numbers.
    printf("%d\n", *ptr--);
    printf("%d\n", *++ptr);

    return 0;
}