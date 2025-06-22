def rotate_array(nums, k):
    k = k % len(nums)
    return nums[-k:] + nums[:-k]

nums = [1, 2, 3, 4, 5]
k = 2
print("Rotated array:", rotate_array(nums, k))
