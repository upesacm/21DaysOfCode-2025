def replace_negatives(nums):
    return [0 if x < 0 else x for x in nums]

# Example usage
print(replace_negatives([-1, 2, -3, 4, 5]))  # Output: [0, 2, 0, 4, 5]