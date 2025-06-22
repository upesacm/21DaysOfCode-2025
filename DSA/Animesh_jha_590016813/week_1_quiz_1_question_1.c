int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += nums[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        } else if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}
//question_1-ans-->currentSum is initialized to 0 and reset to 0 on negative sum, which fails for all-negative arrays.
//question_2-ans-->All-Negative Case: Returns 0 incorrectly.
//question_3-ans-->Returns -1 (accidentally correct due to flawed logic).
