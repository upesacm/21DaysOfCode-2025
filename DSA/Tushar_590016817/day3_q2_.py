def contains_duplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True  # Duplicate found
        seen.add(num)
    return False  # No duplicates found

# Example 1
print(contains_duplicate([1, 2, 3, 4]))  # Output: False

# Example 2
print(contains_duplicate([1, 2, 3, 2]))  # Output: True

# Example 3
print(contains_duplicate([5, 5, 5]))     # Output: True
def contains_duplicate(nums):
    return len(nums) != len(set(nums))
