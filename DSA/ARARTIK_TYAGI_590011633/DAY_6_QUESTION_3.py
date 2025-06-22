def longest_consecutive_increasing(nums):
    if not nums:
        return 0
    max_len = 1
    curr_len = 1
    for i in range(1, len(nums)):
        if nums[i] == nums[i-1] + 1:
            curr_len += 1
            max_len = max(max_len, curr_len)
        else:
            curr_len = 1
    return max_len

# User Input
nums = list(map(int, input("Enter array to find longest consecutive increasing subarray (space-separated): ").split()))
print("Length of longest consecutive increasing subarray:", longest_consecutive_increasing(nums))