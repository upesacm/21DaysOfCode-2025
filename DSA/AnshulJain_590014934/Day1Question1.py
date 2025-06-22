def replace_negatives_with_zero(nums):
    
    return [0 if num < 0 else num for num in nums]
nums = [-1, 2, -3, 4, 5]
modified_nums = replace_negatives_with_zero(nums)
print(modified_nums)  # Output: [0, 2, 0, 4, 5]
