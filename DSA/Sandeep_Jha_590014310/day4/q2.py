def rotate_array(nums, k):
    n = len(nums)
    k %= n
    return nums[-k:] + nums[:-k]

print(rotate_array([1, 2, 3, 4, 5], 2))  # Output: [4, 5, 1, 2, 3]
