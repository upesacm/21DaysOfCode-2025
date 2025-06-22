#include <stdio.h>

int findDuplicate(int arr[], int size) {
    int n = size - 1; 
    int freq[n+1];    


    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }

    return -1; 
}

int main() {
    int arr[] = {1, 3, 4, 2, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, size);

    if (duplicate != -1) {
        printf("Duplicate number found: %d\n", duplicate);
    } else {
        printf("No duplicate found\n");
    }

    return 0;
}
