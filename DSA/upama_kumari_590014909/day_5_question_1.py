def find_unique(nums):
    unique = 0
    for num in nums:
        unique ^= num 
    return unique

nums = [2, 2, 1]
print(find_unique(nums)) 
