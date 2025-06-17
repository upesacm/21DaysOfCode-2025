def first_last_index(nums):
    if not nums:
        return None, None  # empty list case
    return nums[0], nums[-1]

# Example usage:
nums = [11, 22, 33, 44]
first, last = first_last_index(nums)
print(f"First: {first}, Last: {last}")  # Output: First: 11, Last: 44