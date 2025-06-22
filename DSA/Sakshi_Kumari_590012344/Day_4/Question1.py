Your task:
Find and return the minimum element in the array.
def find_minimum(nums):
    minimum = nums[0]
    for num in nums:
        if num < minimum:
            minimum = num
    return minimum


