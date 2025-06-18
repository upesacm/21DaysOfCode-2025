def second_largest_unique(nums):
    unique_nums = list(set(nums)) 
    if len(unique_nums) < 2:
        return -1
    unique_nums.sort(reverse=True)  
    return unique_nums[1]

nums = [10, 20, 30, 40]
print(second_largest_unique(nums))  
