def replace_negative_with_zero(nums):
    return [0 if num < 0 else num for num in nums]

# Input User
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = replace_negative_with_zero(nums)
print("Modified Array: ", result)