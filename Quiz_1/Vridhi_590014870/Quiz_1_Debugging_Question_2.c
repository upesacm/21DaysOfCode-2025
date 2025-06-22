/*
1. Bug: The variable "max" is uninitialised. Undefined behaviour results from assigning and comparing with an uninitialised variable.

2. Incorrect Behavior: If all of the elements are negative or less than the initial garbage value of 'max', the function might return a garbage value or fail to find the correct maximum.

3. Corrected Version: Initialize 'max' to the first element of the array before the loop.
*/
#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int n) 
{
    int max;//yaha galti hai
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) // aagar max me kuch me aap value nhi daaloge to jiss address pe vo stored hoga usi se compare karega aur vo number bohot bdha hota hai 
       {
            max = arr[i];
        }
    }
    return max;
}

// my solution
int findMax(int arr[], int n) 
{
    int max=INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}