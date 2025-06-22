def contains_duplicate(nums):
    return len(set(nums)) != len(nums)

# Example 
print(contains_duplicate([1, 2, 3, 4]))  
print(contains_duplicate([1, 2, 3, 2]))  
print(contains_duplicate([5, 5, 5]))    
