def find_minimum(nums):
    if not nums:
        raise ValueError("Array is empty")
    min_elem = nums[0]
    for num in nums[1:]:
        if num < min_elem:
            min_elem = num
    return min_elem

# Example : 
nums3 = [-3, -1, -5, -2]
print(find_minimum(nums3)) 