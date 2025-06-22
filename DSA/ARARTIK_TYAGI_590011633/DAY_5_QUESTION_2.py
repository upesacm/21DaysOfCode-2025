nums = list(map(int, input("Enter numbers (space-separated): ").split()))
n = len(nums)
expected_sum = n * (n + 1) // 2
actual_sum = sum(nums)

missing_number = expected_sum - actual_sum
print("The missing number is:", missing_number)