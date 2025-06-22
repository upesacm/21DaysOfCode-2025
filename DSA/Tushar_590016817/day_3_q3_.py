def second_largest(nums):
    unique_nums = list(set(nums))  # Step 1: Remove duplicates
    if len(unique_nums) < 2:       # Step 2: Check for at least 2 unique elements
        return -1
    unique_nums.sort(reverse=True)  # Step 3: Sort descending
    return unique_nums[1]           # Return second largest

# Example 1
print(second_largest([10, 20, 30, 40]))  # Output: 30

# Example 2
print(second_largest([5, 5, 5]))         # Output: -1

# Example 3
print(second_largest([3, 2, 1]))         # Output: 2
