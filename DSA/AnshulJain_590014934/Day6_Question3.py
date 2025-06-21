def longest_consecutive_subarray(nums):
    max_len = cur = 1
    for i in range(1, len(nums)):
        cur = cur + 1 if nums[i] == nums[i-1] + 1 else 1
        max_len = max(max_len, cur)
    return max_len
print(longest_consecutive_subarray([1,2,2,3,4,1,2,3,4,5]))  # Output: 5
