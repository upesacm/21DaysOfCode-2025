def replace_negatives(nums):
    return [0 if num < 0 else num for num in nums]
'''nums = [1,-2,3,4,5,-2]
print(replace_negatives(nums))'''