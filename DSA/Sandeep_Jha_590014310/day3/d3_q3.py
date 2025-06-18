def find_second_largest(nums):
    unique_nums = list(set(nums))
    
    if len(unique_nums) < 2:
        return -1
    
    unique_nums.sort()
    
    return unique_nums[-2]

print(find_second_largest([5,5,5])) #5