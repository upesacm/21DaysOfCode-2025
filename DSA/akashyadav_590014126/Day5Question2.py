def missingNumber(nums):
    nums.sort()
    for i in range(len(nums)):
        if nums[i] != i:
            return i
    return len(nums)
    
#example
print(missingNumber([1, 0, 2, 4])) #output=3