def find_missing_and_repeated(nums):
    n = len(nums)
    count = [0] * (n + 1)  # Because elements are from 1 to n

    for num in nums:
        count[num] += 1

    for i in range(1, n + 1):
        if count[i] == 0:
            missing = i
        elif count[i] == 2:
            repeated = i

    return missing, repeated

# Example:
nums = [3, 1, 3]
missing, repeated = find_missing_and_repeated(nums)
print(f"Missing: {missing}, Repeated: {repeated}")
