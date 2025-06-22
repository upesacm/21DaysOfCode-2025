def Increasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False
    return True

nums = [1, 2, 3, 4]
print(Increasing(nums)) 
