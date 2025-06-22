def rotate_array(nums, k):
    n = len(nums)
    k %= n  # Handles cases where k > n
    return nums[-k:] + nums[:-k]
print("\nRotate Array Tests:")
print(rotate_array([1, 2, 3, 4, 5], 2))   # Output: [4, 5, 1, 2, 3]
print(rotate_array([10, 20, 30], 4))      # Output: [30, 10, 20]
print(rotate_array([1, 2], 1))            # Output: [2, 1]