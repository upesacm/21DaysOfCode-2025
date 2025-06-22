def find_missing_and_duplicate(nums):
    n = len(nums)
    seen = set()
    duplicate = -1

    for num in nums:
        if num in seen:
            duplicate = num
        else:
            seen.add(num)

    for i in range(1, n + 1):
        if i not in seen:
            missing = i
            break

    return missing, duplicate

missing, duplicate = find_missing_and_duplicate([3, 1, 3])
print(f"Missing: {missing}, Twice: {duplicate}") 
