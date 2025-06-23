class Solution:

    def maxSubarraySumOriginal(self, nums: list[int]) -> int:
        if not nums:
            return 0
        maxSum = nums[0]
        currentSum = 0

        for i in range(len(nums)):
            currentSum += nums[i]
            if currentSum > maxSum:
                maxSum = currentSum
            elif currentSum < 0:
                currentSum = 0

        return maxSum

    def maxSubarraySumFixed(self, nums: list[int]) -> int:
        if not nums:
            return 0
        maxSum = currentSum = nums[0]

        for i in range(1, len(nums)):
            currentSum = max(nums[i], currentSum + nums[i])
            maxSum = max(maxSum, currentSum)

        return maxSum


# Problems with the original function:
# 1. The function does not handle cases where all elements are negative.


def main():
    solution = Solution()

    arr1 = [-3, -2, -1, -4]

    print("Original", solution.maxSubarraySumOriginal(arr1))
    print("Fixed", solution.maxSubarraySumFixed(arr1))


if __name__ == "__main__":
    main()
