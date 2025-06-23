int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0]; // Start from first element

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}
// Answer of the TASK:
// 1. Bug: Loop starts from i = 0 but currentSum is initialized to 0. It causes double counting of nums[0].
//    Also, currentSum reset to 0 makes it fail for all-negative arrays.
// 2. In all-negative arrays like {-3, -2, -1}, resetting currentSum to 0 loses valuable info.
// 3. For input {-3, -2, -1, -4}, function should return -1 (max element).
// 4. Fixed by starting both maxSum and currentSum at nums[0], and loop from i = 1.
