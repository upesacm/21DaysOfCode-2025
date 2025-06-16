def replace_negatives(nums):
    return [0 if num < 0 else num for num in nums]

# Example:
numbers = [4, -3, 7, -1, 0, 5]
result = replace_negatives(numbers)
print(result)  
# Output: [4, 0, 7, 0, 0, 5]