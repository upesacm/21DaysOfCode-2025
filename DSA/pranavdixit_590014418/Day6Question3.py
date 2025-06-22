def longest_consecutive_streak(nums):
    if not nums:
        return 0

    longest = 1
    current_streak = 1

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_streak += 1
            longest = max(longest, current_streak)
        else:
            current_streak = 1
    
    return longest

print("Longest streak:", longest_consecutive_streak([1, 2, 2, 3, 4, 1, 2, 3, 4, 5]))
print("Longest streak:", longest_consecutive_streak([5, 4, 3, 2]))
print("Longest streak:", longest_consecutive_streak([1, 2, 3, 5, 6, 7]))
