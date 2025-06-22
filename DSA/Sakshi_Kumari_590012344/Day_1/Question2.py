# Problem: Find the missing and repeated number in an array
# Given an array of size n containing numbers from 1 to n,
# one number is missing and one number is repeated.
# Return (repeated, missing)
def find_missing_and_repeated(nums):
    n = len(nums)
    count = [0] * (n + 1)

    for num in nums:
        count[num] += 1

    repeated = -1
    missing = -1

    for i in range(1, n + 1):
        if count[i] == 2:
            repeated = i
        elif count[i] == 0:
            missing = i

    return repeated, missing
  # Test Case 1
find_missing_and_repeated([3, 1, 3])       # Output: Missing: 2, Twice: 3

# Test Case 2
find_missing_and_repeated([4, 3, 6, 2, 1, 1])  # Output: Missing: 5, Twice: 1

