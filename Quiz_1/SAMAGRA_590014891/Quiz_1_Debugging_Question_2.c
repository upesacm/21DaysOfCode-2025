#include <limits.h>  // Optional, used in explanation

// Q.2 The following function is supposed to return the maximum element in an array:
//
// Tasks:
// 1. Identify the bug in the above implementation
// 2. What kind of incorrect behavior or result might it produce?
// 3. Rewrite the corrected version of the function

int findMax(int arr[], int n) 
{
    // Bug Identified:
    // The variable 'max' is declared but not initialized.
    // This causes undefined behavior because it compares uninitialized (garbage) value with array elements.

    // Incorrect Behavior:
    // The function may return an incorrect maximum value or garbage value,
    // especially when all array elements are negative, or if the garbage value is larger than any array element.

    // Fix: Initialize 'max' with the first element of the array
    int max = arr[0];

    for (int i = 1; i < n; i++) // start from index 1 since arr[0] is already in 'max'
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
