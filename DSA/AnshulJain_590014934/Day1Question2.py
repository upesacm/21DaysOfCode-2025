def find_missing_and_duplicate(nums):
    n = len(nums)
    dup = sum(nums) - sum(set(nums))
    missing = (n * (n + 1) // 2) - (sum(nums) - dup)
    return missing, dup


nums = [4, 3, 6, 2, 1, 1]
missing, duplicate = find_missing_and_duplicate(nums)
print(f"Missing: {missing}, Twice: {duplicate}")


 # Output: Missing: 5, Twice: 1