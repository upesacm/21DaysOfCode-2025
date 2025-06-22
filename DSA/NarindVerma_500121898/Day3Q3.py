def second_largest(nums):
    unique = list(set(nums))
    if len(unique) < 2:
        return -1
    unique.sort(reverse=True)
    return unique[1]

# Examples
print(second_largest([10, 20, 30, 40]))  # Output: 30
print(second_largest([5, 5, 5]))         # Output: -1
print(second_largest([3, 2, 1]))         # Output: 2
