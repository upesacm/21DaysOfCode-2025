def isStrictlyIncreasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False
    return True


nums = [1, 2, 3, 4]
print(isStrictlyIncreasing(nums)) 

nums2 = [1, 2, 2, 3]
print(isStrictlyIncreasing(nums2)) 
