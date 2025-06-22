def find_minimum(nums):
    # Assume the first number is the minimum
    min_element = nums[0]

    # Loop through the array starting from the second element
    for num in nums[1:]:
        if num < min_element:
            min_element = num
    
    return min_element
print(find_minimum([4, 2, 7, 1, 9]))    # Output: 1
print(find_minimum([5, 5, 5]))          # Output: 5
print(find_minimum([-3, -1, -5, -2]))   # Output: -5
