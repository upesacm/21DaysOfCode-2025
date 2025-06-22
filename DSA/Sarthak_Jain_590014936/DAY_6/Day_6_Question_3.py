#Sarthak Jain 590014936
#Day 6 (21/06/2025) Question 3
#Find the Length of the Longest Consecutive Increasing Subarray

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

max_len = 1
curr_len = 1

for i in range(1, n):
    if nums[i] == nums[i - 1] + 1:
        curr_len += 1
        if curr_len > max_len:
            max_len = curr_len
    else:
        curr_len = 1

print("Length of longest consecutive increasing subarray:", max_len)
