def change_negative(nums):
    return [0 if num < 0 else num for num in nums]
# examples
print(change_negative([1, -2, 3, -4, -5]))