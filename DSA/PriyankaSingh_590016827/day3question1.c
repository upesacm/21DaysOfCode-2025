#include <stdio.h>
#include <stdlib.h>

// Function to count frequencies and calculate the sum
int sumKFrequent(int* nums, int numsSize, int k) {
    // Create a frequency map (using a simple approach)
    // First, find the maximum and minimum values in the array
    int max = nums[0], min = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    
    // Allocate memory for frequency array
    int range = max - min + 1;
    int* freq = (int*)calloc(range, sizeof(int));
    
    // Count frequencies
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i] - min]++;
    }
    
    // Calculate the sum of elements with frequency == k
    int sum = 0;
    for (int i = 0; i < range; i++) {
        if (freq[i] == k) {
            sum += (i + min); // Convert back to original value
        }
    }
    
    free(freq);
    return sum;
}

int main() {
    int n, k;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    
    int result = sumKFrequent(nums, n, k);
    printf("Sum of distinct elements appearing exactly %d times: %d\n", k, result);
    
    free(nums);
    return 0;
}