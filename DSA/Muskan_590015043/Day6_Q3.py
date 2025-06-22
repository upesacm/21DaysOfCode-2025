# 3. Find the Length of the Longest Consecutive Increasing Subarray
nums = list(map(int,input("Enter the array elements (space seperated) ").split()))
def len_subarray(nums):
    new = []
    for i in range(len(nums)-1,0,-1):
        if nums[i]==nums[i-1]+1:
            new.append(0)
        else:
            new.append(1)
    count = 0
    for j in new:
        if j == 0:
            count = count+1
        elif j == 1:
            break
    return count+1
print(len_subarray(nums))
