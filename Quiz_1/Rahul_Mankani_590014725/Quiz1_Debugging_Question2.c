#include <limits.h>

int findMax(int arr[], int n) 
{
    if (n <= 0) 
      return 0; // Edge case: empty array
    int max = arr[0]; // issue: max was declared but not initialised before using in the condition below
    for (int i = 1; i < n; i++) // Start from i=1 since max = arr[0]
    {                     
        if (arr[i] > max) // Unusual Behaviour: max was uninitialised, which might have produced garbage value in C.
        {
            max = arr[i];
        }
    }
    return max;
}
