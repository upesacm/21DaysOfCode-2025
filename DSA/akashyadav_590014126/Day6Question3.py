def longest_streak(nums):
    if not nums:
        return 0

    max_len = 1
    current_len = 1

    for i in range(1, len(nums)):
        if nums[i] - nums[i - 1] == 1:
            current_len += 1
            max_len = max(max_len, current_len)
        else:
            current_len = 1  # resets the streak when sequence breaks

    return max_len
    
#example
nums = [1, 2, 3, 4, 6, 7] 
print(longest_streak(nums))
#Output: 3 