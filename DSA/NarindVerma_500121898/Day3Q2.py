def has_duplicates(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False

# Examples
print(has_duplicates([1, 2, 3, 4]))    # Output: False
print(has_duplicates([1, 2, 3, 2]))    # Output: True
print(has_duplicates([5, 5, 5]))       # Output: True
