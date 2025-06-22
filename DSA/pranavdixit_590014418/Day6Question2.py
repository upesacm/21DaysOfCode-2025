def is_strictly_increasing(nums):
    for i in range(len(nums) - 1):
        if nums[i] >= nums[i + 1]:
            return False
    return True

print("Is Increasing?", is_strictly_increasing([1, 2, 3, 4]))
print("Is Increasing?", is_strictly_increasing([1, 2, 2, 3]))
print("Is Increasing?", is_strictly_increasing([5, 4, 3]))
