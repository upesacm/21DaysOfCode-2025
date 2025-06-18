#include <stdio.h>
#include <stdbool.h>

void count_frequencies(int arr[], int freq[], int size, int max_val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0 || arr[i] > max_val) {
            // Handle out-of-range values if needed
            continue;
        }
        freq[arr[i]]++;
    }
}

bool are_equal(int arr1[], int arr2[], int n, int m) {
    if (n != m) return false;

    int max_val = 1000; // Adjust based on your expected input range
    int freq1[max_val + 1];
    int freq2[max_val + 1];

    for (int i = 0; i <= max_val; i++) freq1[i] = freq2[i] = 0;

    count_frequencies(arr1, freq1, n, max_val);
    count_frequencies(arr2, freq2, m, max_val);

    for (int i = 0; i <= max_val; i++) {
        if (freq1[i] != freq2[i]) return false;
    }

    return true;
}

int main() {
    int n, m;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    if (are_equal(arr1, arr2, n, m))
        printf("Arrays are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}
