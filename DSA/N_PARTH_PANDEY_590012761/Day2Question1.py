def sum_of_even_numbers(nums):
    total = 0
    for num in nums:
        if num % 2 == 0:
            total += num
    return total


nums = [1, 2, 3, 4, 5]
print(sum_of_even_numbers(nums))  
