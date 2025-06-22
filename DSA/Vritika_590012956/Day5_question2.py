def missing_number(nums):
    n = len(nums)
    expected_sum = n * (n + 1) // 2
    actual_sum = sum(nums)
    return expected_sum - actual_sum

nums = list(map(int, input("Enter the array elements separated by space: ").split()))
print("Missing Number:", missing_number(nums))
