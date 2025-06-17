def sum_of_even_num(nums):
    total = 0
    for num in nums:
        if num % 2 == 0:
            total += num
    return total
nums = [10, 15, 20]
result = sum_of_even_num(nums)
print(result)

# output: 30