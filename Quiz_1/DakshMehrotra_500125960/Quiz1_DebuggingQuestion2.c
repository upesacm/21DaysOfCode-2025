/*
1. Bug: The variable "max" is uninitialised. Undefined behaviour results from assigning and comparing with an uninitialised variable.

2. Incorrect Behavior: If all of the elements are negative or less than the initial garbage value of 'max', the function might return a garbage value or fail to find the correct maximum.

3. Corrected Version: Initialize 'max' to the first element of the array before the loop.
*/

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