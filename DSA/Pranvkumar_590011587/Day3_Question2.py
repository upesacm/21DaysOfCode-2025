def contains_Duplicate(nums):
    if not nums:
        return None  
    return len(nums) != len(set(nums))

# Example :
nums = [1,6,7,7,9,10]
result = contains_Duplicate(nums)
print(result)