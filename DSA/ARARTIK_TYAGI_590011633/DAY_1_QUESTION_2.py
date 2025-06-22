def find_missing_and_repeated(nums):
    n = len(nums)
    expected_sum = n * (n + 1)  // 2
    actual_sum = sum(nums)
    seen = set()
    repeated = -1

    for num in nums:
        if num in seen:
            repeated = num
        else:
            seen.add(num)

    missing = expected_sum - (actual_sum - repeated)
    return (missing, repeated)

#Input user 
nums = list(map(int, input("Enter the array elements (1 to n, one repeated, one missing): ").split()))
missing, repeated = find_missing_and_repeated(nums)
print("Missing: ", missing)
print("Repeated:", repeated)