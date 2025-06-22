// TASK 1 
// The variable max is declared but not initialized therefore using an uninitialized variable in C leads to undefined behavior or garbage value.

// TASK 2
// Because max is uninitialized
//It may hold any garbage value.
//The if (arr[i] > max) condition could fail even when it shouldn't.
//It could return a completely wrong value, not from the array at all.

// TASK 3 
#include <stdio.h>

int findMax(int arr[], int n) 
{
    int maxi = arr[0]; // must be initialised
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) 
            maxi = arr[i];
    }
    return maxi;
}

int main() 
{   int arr[] = {2, 4, 6, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
     int maxele = findMax(arr, n);
    printf("max element is - %d\n", maxele);
    return 0;
}
