def only_number_left(nums):
    result = 0
    for num in nums:
        result ^= num
    return result
    
#example
print(only_number_left([6, 7, 6, 7, 5])) #output= 5