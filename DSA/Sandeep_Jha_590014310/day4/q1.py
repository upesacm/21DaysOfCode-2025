def find_minimum(nums):
    if not nums:
        return None  # handle empty array
    minimum = nums[0]
    for num in nums:
        if num < minimum:
            minimum = num
    return minimum

print(find_minimum([4, 2, 7, 1, 9]))  # Output: 1
