def is_strictly_increasing(nums):
    return all(x < y for x, y in zip(nums, nums[1:]))
print(is_strictly_increasing([1, 2, 3, 4]))  # True
print(is_strictly_increasing([1,3,2,4]))  # False
