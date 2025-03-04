// Problem Statement:
// Given two sorted arrays A and B of sizes m and n respectively, design an algorithm to find the median of the combined sorted order of
// these arrays. Your algorithm should have a time complexity of O(log(min(m, n))).

// Example:
// Input: A = [1, 3], B = [2]
// Output: 2.0

// Explanation: The combined sorted array is [1, 2, 3], and the median is 2.

// ----- ----- ----- ----- ----- ----- -----

// Solution:
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <math.h>

int largest(int num1, int num2);
void quickSort(int arr[], int low, int high);

void main()
{
    int A[] = {1, 2, 3};
    int B[] = {1, 5, 7, 8};
    int lengthOfA = sizeof(A) / sizeof(A[0]);
    int lengthOfB = sizeof(B) / sizeof(B[0]);

    int largeLength = largest(lengthOfA, lengthOfB);
    int totalLength = lengthOfA + lengthOfB;

    int *finalArray = (int *)(malloc(sizeof(int) * totalLength));

    for (int i = 0; i < lengthOfA; i++)
        finalArray[i] = A[i];
    for (int i = 0; i < lengthOfB; i++)
        finalArray[i + lengthOfA] = B[i];

    quickSort(finalArray, 0, totalLength-1);
}

int largest(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

void quickSort(int arr[], int low, int high)
{
    // int pivot = 

}