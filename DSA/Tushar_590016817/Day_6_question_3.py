def longestConsecutiveIncreasingSubarray(nums):
    if not nums:
        return 0

    max_len = current_len = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_len += 1
        else:
            current_len = 1
        max_len = max(max_len, current_len)

    return max_len

# Test cases
print(longestConsecutiveIncreasingSubarray([1, 2, 2, 3, 4, 1, 2, 3, 4, 5]))  # Output: 5
print(longestConsecutiveIncreasingSubarray([5, 4, 3, 2]))                   # Output: 1
print(longestConsecutiveIncreasingSubarray([1, 2, 3, 5, 6, 7]))             # Output: 3
