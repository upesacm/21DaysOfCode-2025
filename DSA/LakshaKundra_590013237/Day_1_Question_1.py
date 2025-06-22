def replace_negative(nums):
    for i in range(len(nums)):
        if nums[i]<0:
            nums[i]=0
    return nums
print("Example 1:")
nums= [-1,2,-3,4,5] 
print("New array: ",replace_negative(nums))
print("Example 2:")
nums= [0,-5,-10]
print("New array: ",replace_negative(nums))
print("Example 3:")
nums= [1,2,3,4] 
print("New array: ",replace_negative(nums))
