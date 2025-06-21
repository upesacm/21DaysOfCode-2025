#include <stdio.h>

int findLongestConsecutiveIncreasingSubarray(int arr[], int n, int *startIdx) {
    if (n == 0) return 0;

    int maxLength = 1, currLength = 1;
    int tempStart = 0;
    *startIdx = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currLength++;
        } else {
            currLength = 1;
            tempStart = i;
        }

        if (currLength > maxLength || 
           (currLength == maxLength && tempStart > *startIdx)) {
            maxLength = currLength;
            *startIdx = tempStart;
        }
    }

    return maxLength;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int startIdx;
    int maxLength = findLongestConsecutiveIncreasingSubarray(arr, n, &startIdx);

    printf("Length of the longest consecutive increasing subarray: %d\n", maxLength);
    printf("Subarray: ");
    for (int i = startIdx; i < startIdx + maxLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
