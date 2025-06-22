def contains_duplicate(nums):
    return len(nums) != len(set(nums))

nums = [1, 2, 3, 4]
print(contains_duplicate(nums)) 
