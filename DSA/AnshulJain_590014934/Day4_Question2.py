def rotate(nums, k):
    k %= len(nums)
    return nums[-k:] + nums[:-k]

nums = [1, 2]
k = 1
print(rotate(nums, k))
# # output: [2, 1]  