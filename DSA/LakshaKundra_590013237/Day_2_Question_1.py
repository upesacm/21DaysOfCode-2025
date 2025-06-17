def sum_of_even_numbers(nums):
    sum = 0
    for num in nums:
        if num % 2 == 0:
            sum += num
    return sum
print(sum_of_even_numbers([1, 2, 3, 4, 5]))   
print(sum_of_even_numbers([10, 15, 20]))      
print(sum_of_even_numbers([1, 3, 5]))         
