def missing_number(nums):
    return sum(range(len(nums) + 1)) - sum(nums)

print(missing_number([3, 0, 1])) 
 # Output: 2
