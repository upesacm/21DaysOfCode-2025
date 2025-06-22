def remove_occurrences(nums, val):
    i = 0  
    
    for j in range(len(nums)):  
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i  
print(remove_occurrences([3, 2, 2, 3], 3)) 
print(remove_occurrences([0, 1, 2, 2, 3, 0, 4, 2], 2)) 
print(remove_occurrences([1, 1, 1], 1))  
