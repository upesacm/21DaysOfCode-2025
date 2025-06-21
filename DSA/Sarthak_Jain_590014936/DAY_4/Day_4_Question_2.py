#Sarthak Jain 590014936
#Day 4 Question 2
#Rotate Array by k Steps

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

k = int(input("Enter number of steps to rotate:"))

print("Original List:", nums)

# Adjust k if it's larger than n
k = k % n

# Perform rotation using slicing
rotated = nums[-k:] + nums[:-k]

print("Rotated List:", rotated)
