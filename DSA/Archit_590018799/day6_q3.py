#Find the length of the longest contiguous subarray with consecutive increasing elements.
nums = list(map(int,input("enter list with space :").split()))

current_length = 1
max_length = 1

for i in range(1, len(nums)):
    if nums[i] == nums[i-1] + 1:
        current_length += 1
        max_length = max(max_length, current_length)
    else:
        current_length = 1  
print( max_length)
