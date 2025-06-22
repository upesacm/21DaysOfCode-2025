def find_duplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)
    return -1  # Should never happen based on problem constraint

# User Input
nums = list(map(int, input("Enter n+1 integers in range 1 to n (space-separated): ").split()))
print("Duplicate number is:", find_duplicate(nums))