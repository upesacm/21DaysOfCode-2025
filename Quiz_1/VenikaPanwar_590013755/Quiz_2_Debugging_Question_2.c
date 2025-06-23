/* Q2. Finding the Maximum Element in an Array

 Q1. What’s the bug here?

The variable max is declared but never initialized. So when the condition arr[i] > max runs, it’s comparing values against some random garbage data that happened to be in memory.

This can lead to completely unpredictable behavior.



 Q2. What could go wrong because of this?

Because max isn’t initialized, the loop might never update the max value properly. As a result, the function could return a wrong number or some junk memory value, depending on the system.



Q3. How to fix it?

Just make sure max is initialized with the first element of the array. That way, it’s guaranteed to have a valid starting value.

Here’s the corrected version:*/

#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int n) {
    int max = arr[0];  // Assume first element is the maximum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger value is found
        }
    }

    return max;
}

int main() {
    // Sample input array
    int arr[] = {10, 25, 3, 47, 5, 98, 65};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find maximum value
    int maxValue = findMax(arr, n);

    // Print result
    printf("Maximum element in the array is: %d\n", maxValue);

    return 0;
}


/*This version starts with a proper baseline (arr[0]) and compares it with the rest of the array, updating as needed. It’s clean, safe, and works with all arrays of size ≥ 1.*/
