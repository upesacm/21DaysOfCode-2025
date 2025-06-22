def longestConsecutiveSubarray(nums):
    if not nums:
        return 0
    max_len = 1
    current_len = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_len += 1
            max_len = max(max_len, current_len)
        else:
            current_len = 1

    return max_len
print(longestConsecutiveSubarray([1, 2, 2, 3, 4, 1, 2, 3, 4, 5])) 
print(longestConsecutiveSubarray([5, 4, 3, 2]))                  
print(longestConsecutiveSubarray([1, 2, 3, 5, 6, 7]))             
