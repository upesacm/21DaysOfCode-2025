/*1. Replace All Negative Numbers with Zero
A basic array manipulation problem that introduces conditional element modification.
Problem Statement:
Given an array nums of size n, replace all negative numbers in the array with zero. Return the
modified array.
This problem introduces you to array traversal and conditional modification of elements,
which are fundamental skills in array manipulation and data processing.
Your task: Replace all negative numbers in the array with zero and return the modified array.
Examples
Input:
nums = [-1, 2, -3, 4, 5]
Output:
[0, 2, 0, 4, 5]
Input:
nums = [0, -5, -10]
Output:
[0, 0, 0]
Input:
nums = [1, 2, 3, 4]
Output:
[1, 2, 3, 4]*/
#include <stdio.h>

void function(int arr[], int size)
{
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1) 
        {
            printf(", ");
        }
    }
    printf("\n");
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) 
        {
            arr[i] = 0;
        }
    }
    printf("Modified array (negatives replaced with 0): ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d", arr[i]);
        if (i < size - 1) 
        {
            printf(", ");
        }
    }
    printf("\n");
}

int main() 
{
    int numbers[] = { -1, 2, -3, 4, -5 };
    int length = sizeof(numbers) / sizeof(numbers[0]);
    function(numbers, length);
    return 0;
}
