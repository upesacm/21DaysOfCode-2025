def contains_duplicate(nums):
    return len(set(nums)) < len(nums)

nums = [1,2,3,2]
print(contains_duplicate(nums))
# output: True
