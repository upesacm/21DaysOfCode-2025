# 2. Check if Array is Fully Increasing
nums = list(map(int,input("Enter the array elements (space seperated) ").split()))
new = []
for i in range(len(nums)-1,0,-1):
     if nums[i]>nums[i-1]:
        new.append(0)
     else:
        new.append(1)
if 1 in new:
    print("false")
else:
    print("true")