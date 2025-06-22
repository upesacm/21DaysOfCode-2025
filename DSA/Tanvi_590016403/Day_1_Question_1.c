#include <stdio.h>
#include <stdlib.h>

// Function to process the array
void processArray(int nums[], int n) {
    int sum = 0;
    int freq[n + 1];
    for (int i = 0; i <= n; i++) freq[i] = 0;

    printf("Modified array (negatives replaced with zero):\n[");
    for (int i = 0; i < n; i++) {
        // Task 1: Replace negative numbers with zero
        if (nums[i] < 0)
            nums[i] = 0;

        // Task 2: Frequency array for missing and duplicate
        if (nums[i] >= 1 && nums[i] <= n)
            freq[nums[i]]++;

        // Task 3: Calculate sum
        sum += nums[i];

        // Print modified array
        printf("%d", nums[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    // Task 2: Find missing and repeated
    int missing = -1, repeated = -1;
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0)
            missing = i;
        else if (freq[i] == 2)
            repeated = i;
    }

    // Output for task 2 and 3
    if (missing != -1 && repeated != -1)
        printf("Missing: %d, Twice: %d\n", missing, repeated);
    else
        printf("No missing or repeated numbers found in the range 1 to %d\n", n);

    printf("Sum of array elements: %d\n", sum);
}

// Main function to test the above logic
int main() {
    int nums1[] = {-1, 2, -3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Example 1:\n");
    processArray(nums1, size1);
    printf("\n");

    int nums2[] = {3, 1, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Example 2:\n");
    processArray(nums2, size2);
    printf("\n");

    int nums3[] = {10, 20, 30};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Example 3:\n");
    processArray(nums3, size3);
    printf("\n");

    return 0;
}
