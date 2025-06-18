def sum_of_even(nums):
    sum = 0
    for i in nums:
        if i % 2 == 0:
            sum += i
    return sum

print(sum_of_even([1, 2, 3, 4, 5, 6])) # 12