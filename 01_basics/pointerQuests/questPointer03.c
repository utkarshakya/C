// for question see questPointer.txt file.

#include <stdio.h>

void array(int *atr, int n)
{
    printf("Address of the 1st element of the array : %p\n", atr);
    printf("First Element is %d\n", *(atr + 0));
    *(atr + 0) = 23; // change the 1st element.
    printf("Address of the 2nd element : %p\n", (atr + 1));
}

int main()
{

    int arr[3] = {3, 5, 2};
    int *ptr = &arr[0];

    printf("%p\n%p\n", ptr, arr); // Array name is work as the pointer.
    printf("%d, %d, %d\n", *(arr + 0), *(arr + 1), *(arr + 2)); // Pointer arithmetic can also we use since array name is a pointer.

    // Since it is a pointer we can also use it to works with functions (as call by reference).
    array(arr, 3);
    printf("Value of 1st element is changed to %d\n", *(arr + 0));

    // We can also use pointer like this:
    int a[3] = {2, 3, 4};
    int (*p)[3] = &a; // Here p stores the address of the whole array of 3 size. (This is very useful in handling 2d arrays.)
    printf("%p, %d, %p, %d\n", (p+0), *(a+0), (p+1), *(*(p+1)));

    return 0;
}

// NOTE: Array name is a pointer which stores the address of the first element of the array (OR in simple words it points to the address of the 0th index of the array).