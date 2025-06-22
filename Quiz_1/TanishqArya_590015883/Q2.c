#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
   
    int arr[] = {3, 8, 2, 7, 5, -4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

  
    int result = findMax(arr, n);

    printf("Maximum element in the array is: %d\n", result);

    return 0;
}
