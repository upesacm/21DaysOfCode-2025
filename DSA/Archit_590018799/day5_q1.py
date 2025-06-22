nums = [4, 1, 2, 1, 2]
for i in range(len(nums)):
    if nums.count(nums[i]) == 1:
        print(nums[i])
        
