def sum_of_even_no(nums):
    return sum(num for num in nums if num % 2 == 0)

# Example :
nums = [10, 12, 13, 14, 15]
print(sum_of_even_no(nums))  # Output: 36