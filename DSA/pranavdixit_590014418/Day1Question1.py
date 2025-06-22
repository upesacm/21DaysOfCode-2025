def replace_negatives(nums):
    return [0 if num < 0 else num for num in nums]
# example
print(replace_negatives([-1, 2, -3, 4, 5]))