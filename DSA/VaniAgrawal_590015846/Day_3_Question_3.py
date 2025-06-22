#Find the second largest unique element in the array, or return -1 if it doesn’t exist.
nums=[1,2,3,0,5,2,2,5,1]
nums.sort(reverse=True)
for i in range(len(nums)-1):
    if nums[i]!=nums[i+1]:
        allsame=False
        second=nums[i+1]
        break
if allsame==True:
    print(-1)
else:
    print(second)

        
