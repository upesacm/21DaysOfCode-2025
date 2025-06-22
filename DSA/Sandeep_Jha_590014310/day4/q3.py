def remove_occurrences(nums, val):
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i


length = remove_occurrences([3, 2, 2, 3], 3)
print(length)  # Output: 2
