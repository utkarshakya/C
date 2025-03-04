// for question see questPointer.txt file.

#include <stdio.h>

int main(){
    int num = 32;
    int *ptr = &num;
    printf("%p\n", ptr);
    printf("%p\n", ptr + 1); // This will add 1 uint to the address
    // Here 1 unit = size of the datatype of ptr.
    // For example : If ptr is of char dataType then it is
    // increased by 1 because char size is 1 byte, but in case of integer 1 unit = 4 bytes.
    printf("%p\n", ptr - 1); // This will subtract 1 unit in the same way.
    return 0;
}