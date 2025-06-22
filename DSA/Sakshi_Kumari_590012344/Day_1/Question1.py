def replace_negatives_with_zero(nums):
    for i in range(len(nums)):
        if nums[i] < 0:
            nums[i] = 0
    return nums

# Sample Test Cases
print(replace_negatives_with_zero([-1, 2, -3, 4, 5]]))   # Output: [0, 2, 0, 4, 5]
print(replace_negatives_with_zero([0, -5, -10]))        # Output: [0, 0, 0]
print(replace_negatives_with_zero([1, 2, 3, 4]))           # Output: [1, 2, 3, 4]

