def find_minimum(nums):
    minimum = nums[0]
    for num in nums:
        if num < minimum:
            minimum = num
    return minimum
# Example usage
print(find_minimum([3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]))