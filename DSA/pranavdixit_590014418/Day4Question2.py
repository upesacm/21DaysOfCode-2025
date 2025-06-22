def rotate_array(nums, k):
    n = len(nums)
    k = k % n  # To handle k > n
    return nums[-k:] + nums[:-k]
# Example usage
print(rotate_array([1, 2, 3, 4, 5], 2)) 