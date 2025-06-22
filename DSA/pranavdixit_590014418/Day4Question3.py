def remove_occurrences(nums, val):
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i  # New length
# Example usage
print(remove_occurrences([3, 2, 2, 3], 3))