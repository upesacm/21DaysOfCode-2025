def find_minimum(nums):
    minimum = nums[0]
    for num in nums:
        if num < minimum:
            minimum = num
    return minimum
print("Minimum Element Tests:")
print(find_minimum([4, 2, 7, 1, 9]))      # Output: 1
print(find_minimum([5, 5, 5]))            # Output: 5
print(find_minimum([-3, -1, -5, -2]))     # Output: -5
