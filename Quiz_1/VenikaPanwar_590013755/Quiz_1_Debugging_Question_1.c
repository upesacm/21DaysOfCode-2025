/*Q1. Analyzing the Kadane’s Algorithm Code

Q1. What’s wrong with the current implementation?

At first glance, the code seems to follow the structure of Kadane’s algorithm, but there’s a subtle logical flaw. The currentSum is initialized to 0, and the code resets it to zero whenever it goes below zero. This works well when the array has a mix of positive and negative numbers.

But… if the array has all negative numbers, this approach becomes problematic. Because of the reset condition, all negative values are effectively ignored, and currentSum keeps getting reset — even though we’re supposed to find the “least negative” number as the maximum subarray in such cases.



 Q2. What happens if the array has only negative numbers?

For example take this array:

int arr[] = {-3, -2, -1, -4};

In this case:
	1.	At each step, currentSum adds a negative number, then immediately gets reset to zero.
	2.	maxSum ends up being -1, but not because of a well-thought-out strategy—just because it happened to be the highest negative number in the array.

This means the algorithm kind of accidentally works here, but it’s not reliable.



Q 3. What would the current function return for arr = {-3, -2, -1, -4}?

It would return -1, since that’s the largest value among the negatives.
But as explained earlier, this result comes from a fragile approach that wouldn’t hold up in a more dynamic or generalized scenario.



 Q4. How can we fix this?

The fix is quite simple:
We should initialize both currentSum and maxSum to the first element of the array. That way, even if all values are negative, the algorithm still works as expected.

Here’s the corrected version:*/

#include <stdio.h>

// Function to find the maximum subarray sum
int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        // Choose the maximum between current element and sum including current element
        if (currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
        else
            currentSum = nums[i];

        // Update maxSum if currentSum is greater
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}

int main() {
    // Sample input array
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    // Function call
    int result = maxSubarraySum(nums, n);

    // Print the result
    printf("Maximum Subarray Sum is: %d\n", result);

    return 0;
}


/*This version avoids resetting to 0 and instead chooses the larger between starting fresh or continuing with the current subarray sum. It works perfectly for all input types, including arrays with only negative number*/

