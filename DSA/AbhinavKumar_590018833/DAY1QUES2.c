#include <stdio.h>

void inputArray(int arr[], int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void findMissingAndRepeated(int arr[], int n, int *repeated, int *missing) {
    int freq[n + 1];  

    for (int i = 0; i <= n; i++) freq[i] = 0;

    for (int i = 0; i < n; i++) freq[arr[i]]++;

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) *missing = i;
         else if (freq[i] == 2) *repeated = i;
        
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);

    int repeated, missing;
    findMissingAndRepeated(arr, n, &repeated, &missing);

    printf("Missing: %d\n", missing);
    printf("Twice: %d\n", repeated);

    return 0;
}
