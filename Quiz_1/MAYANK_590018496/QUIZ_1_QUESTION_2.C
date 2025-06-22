/*        1. Bug in the implementation: 
          The variable max is used before being initialized. This causes undefined behavior, because its value 
          could be anything—leftover data from memory—leading to unreliable comparisons.
          
          2. incorrect behavior or results: 
          If max starts out larger than all elements of the array (due to garbage value), none of the 
          if (arr[i] > max) conditions will be true. The function might return a random number—not from the array at all.
          
          3. Correct version of Function is: */

#include <stdio.h>

int findMax(int arr[], int n) 
{
    if (n <= 0) 
    {
        printf("Array is empty.\n");
        return -1; 
    }

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
    int arr[] = {12, 35, 7, 64, 22};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findMax(arr, size);
    printf("Maximum element in the array: %d\n", result);

    return 0;
}
