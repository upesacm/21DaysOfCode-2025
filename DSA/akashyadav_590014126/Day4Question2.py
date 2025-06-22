def rotate_array_by_k(nums, k):
    n = len(nums)
    k = k % n  # for handling the cases where k is larger than n
    return nums[-k:] + nums[:-k]

# Example usage:
nums = [4, 5, 6, 7, 8, 9]
k = 3
rotated = rotate_array_by_k(nums, k)
print(rotated)  # Output: [7, 8, 9, 4, 5, 6]