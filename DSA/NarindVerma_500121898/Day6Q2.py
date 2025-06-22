def isStrictlyIncreasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False
    return True

# Examples
print(isStrictlyIncreasing([1, 2, 3, 4]))     # Output: True
print(isStrictlyIncreasing([1, 2, 2, 3]))     # Output: False
print(isStrictlyIncreasing([5, 4, 3]))        # Output: False
