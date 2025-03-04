// for question see questPointer.txt file.

#include <stdio.h>

int main(){
    int *ptr1; // This is a wild pointer, it has a garbage value.
    int *ptr2 = NULL; // This one is null pointer (We can also initialise 0).
    
    int *ptr3;
    {
        int x = 3;
        ptr3 = &x; // This is dangling pointer.
    }
    // ptr3 is storing the value of x which has it local scope means, Pointer which stores address of
    // value that not exist is called dangling pointers.

    float value = 3.5;
    int num = 3;
    void *ptr4 = &num; // This is void pointer, used to store value of any datatype.
    ptr4 = &value;
    // But void pointers can not be dereferenced easily (we need to use typecasting to do so).
    printf("%f\n", *(float*)ptr4); // (float*)ptr4 tells the ptr4 that the address is of float type.

    return 0;
}

// TYPES OF POINTERS:
// 1. Wild Pointer.
// 2. Null Pointer.
// 3. Dangling Pointer.
// 4. Void Pointer.