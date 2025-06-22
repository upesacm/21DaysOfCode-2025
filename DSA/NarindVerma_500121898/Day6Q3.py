def longestConsecutiveSubarray(nums):
    if not nums:
        return 0

    max_len = curr_len = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            curr_len += 1
            max_len = max(max_len, curr_len)
        else:
            curr_len = 1

    return max_len

# Examples
print(longestConsecutiveSubarray([1, 2, 2, 3, 4, 1, 2, 3, 4, 5]))  # Output: 5
print(longestConsecutiveSubarray([5, 4, 3, 2]))                    # Output: 1
print(longestConsecutiveSubarray([1, 2, 3, 5, 6, 7]))              # Output: 3
