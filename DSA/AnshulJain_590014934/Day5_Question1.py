def single_number(nums):
    from functools import reduce
    return reduce(lambda x, y: x ^ y, nums)


print(single_number([4, 1, 2, 1, 2]))       
 # Output: 4
