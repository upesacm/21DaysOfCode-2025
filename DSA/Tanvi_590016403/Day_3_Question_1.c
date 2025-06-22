#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1000  // Adjust as needed

// Function prototype
int processArray(int nums[], int n, int k, int choice);

int main() {
    int nums1[] = {2, 3, 9, 9};
    int nums2[] = {1, 8, 8, 8, 5, 6, 2};
    int nums3[] = {1, 2, 3, 4};
    int nums4[] = {1, 2, 3, 2};
    int nums5[] = {5, 5, 5};
    int nums6[] = {10, 20, 30, 40};
    int nums7[] = {3, 2, 1};
    
    // Example usage:
    printf("Q1 Output: %d\n", processArray(nums1, 4, 1, 1));  // Q1
    printf("Q1 Output: %d\n", processArray(nums2, 7, 3, 1));  // Q1
    printf("Q2 Output: %d\n", processArray(nums3, 4, 0, 2));  // Q2
    printf("Q2 Output: %d\n", processArray(nums4, 4, 0, 2));  // Q2
    printf("Q2 Output: %d\n", processArray(nums5, 3, 0, 2));  // Q2
    printf("Q3 Output: %d\n", processArray(nums6, 4, 0, 3));  // Q3
    printf("Q3 Output: %d\n", processArray(nums5, 3, 0, 3));  // Q3
    printf("Q3 Output: %d\n", processArray(nums7, 3, 0, 3));  // Q3
    
    return 0;
}

// Main logic handler
int processArray(int nums[], int n, int k, int choice) {
    int freq[MAX_SIZE] = {0};
    
    if (choice == 1) {
        // K-Frequency Element Sum
        for (int i = 0; i < n; i++)
            freq[nums[i]]++;
        int sum = 0;
        for (int i = 0; i < MAX_SIZE; i++)
            if (freq[i] == k)
                sum += i;
        return sum;

    } else if (choice == 2) {
        // Check for Duplicates
        bool seen[MAX_SIZE] = {false};
        for (int i = 0; i < n; i++) {
            if (seen[nums[i]])
                return 1;  // true
            seen[nums[i]] = true;
        }
        return 0;  // false

    } else if (choice == 3) {
        // Find the Second Largest Unique Element
        int first = -1, second = -1;
        bool visited[MAX_SIZE] = {false};

        for (int i = 0; i < n; i++)
            visited[nums[i]] = true;

        for (int i = MAX_SIZE - 1; i >= 0; i--) {
            if (visited[i]) {
                if (first == -1)
                    first = i;
                else {
                    second = i;
                    break;
                }
            }
        }
        return second;
    }

    return -1;  // Invalid choice
}
