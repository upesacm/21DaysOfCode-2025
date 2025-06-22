
nums = [0, 1, 2, 2, 3, 0, 4, 2]
val = 2
arr=[]
for i in range(len(nums)):
    if nums[i]!=val:
        arr.append(nums[i])
    
print(len(arr))
