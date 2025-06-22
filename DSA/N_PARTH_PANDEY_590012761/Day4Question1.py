def find_minimum(nums):
    if not nums:
        return None  # or raise an error if array must not be empty

    min_element = nums[0]
    for num in nums:
        if num < min_element:
            min_element = num
    return min_element


nums = [4, 2, 7, 1, 9]
print(find_minimum(nums))  
