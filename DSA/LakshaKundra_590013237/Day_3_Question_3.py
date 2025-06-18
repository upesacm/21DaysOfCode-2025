def second_largest(nums):
    unique_nums = list(set(nums)) 
    if len(unique_nums) < 2:
        return -1 
    
    unique_nums.sort(reverse=True)  
    return unique_nums[1]
print(second_largest([10, 20, 30, 40])) 
print(second_largest([5, 5, 5]))  
print(second_largest([3, 2, 1])) 
