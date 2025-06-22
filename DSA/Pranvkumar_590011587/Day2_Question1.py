def sum_of_even_numbers(nums):
    return sum(num for num in nums if num % 2 == 0)

# Example :
nums = [1, 2, 3, 4, 5]
result = sum_of_even_numbers(nums)
print(result) 