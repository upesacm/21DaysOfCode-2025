int maxSubarraySum(int nums[], int n) {
    int maximumSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];
        if (currentSum > maximumSum)
            maximumSum = currentSum;
    }

    return maximumSum;
}
