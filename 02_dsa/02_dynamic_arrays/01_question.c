// Creating and Using Dynamic Array.
// WAP to find the sum of elements of the array?

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n integers
    int *dynamicArray = (int *)malloc(n * sizeof(int));
    if (dynamicArray == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input values for the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dynamicArray[i]);
    }

    // Compute the sum of the array elements
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += dynamicArray[i];
    }
    printf("Sum of the elements of the array = %d", sum);

    // Free the allocated memory
    free(dynamicArray);
    return 0;
}