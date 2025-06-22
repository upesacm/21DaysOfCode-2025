def rotate_array(nums, k):
    n = len(nums)
    if n == 0:
        return nums

    k = k % n  
    return nums[-k:] + nums[:-k]


print(rotate_array([10, 20, 30], 4))      # Output: [30, 10, 20]

