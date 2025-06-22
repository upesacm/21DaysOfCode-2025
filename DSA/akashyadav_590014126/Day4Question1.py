def find_smallest_element(nums):
    if not nums:
        return None  # checks if the list is empty or not
    smallest_val = nums[0]
    for num in nums[1:]:
        if num < smallest_val:
            smallest_val = num
    return smallest_val

# Example usage:
nums = [40, 10, 30, 77, 100, 99]
print(find_smallest_element(nums))  # Output: 10