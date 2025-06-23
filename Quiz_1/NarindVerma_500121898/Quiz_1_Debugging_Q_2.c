/*
Q2 The following function is supposed to return the maximum element in an array:

int findMax(int arr[], int n) 
{
    int max;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

Tasks & Answers:

1. Identify the bug in the above implementation:
   → The variable 'max' is used without being initialized. Comparing uninitialized variables leads to undefined behavior.

2. What kind of incorrect behavior or result might it produce?
   → The function may return a garbage value or incorrect maximum depending on what random value exists in memory for 'max'.

3. Rewrite the corrected version of the function:
   → Initialize 'max' with the first element of the array: int max = arr[0];
*/

#include <stdio.h>

int findMax(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[] = {12, 5, 87, 45, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMax(arr, n);
    printf("Maximum Element: %d\n", result);

    return 0;
}
