#include <stdio.h>
// Function to find the missing and repeated number
void findMissingAndRepeated(int arr[], int n) {
    int count[n + 1]; 

    // Initialize all counts to 0
    for (int i = 0; i <= n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int missing = -1, repeated = -1;

    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            missing = i;
        } else if (count[i] == 2) {
            repeated = i;
        }
    }
    printf("Missing: %d, Twice: %d\n", missing, repeated);
}

int main() {
    int arr1[] = {3, 1, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    findMissingAndRepeated(arr1, n1);  
    return 0;
}

