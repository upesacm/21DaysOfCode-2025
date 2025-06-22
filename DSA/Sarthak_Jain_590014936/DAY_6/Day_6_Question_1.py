#Sarthak Jain 590014936
#Day 6 Question 1
#Find One Duplicate Number in the Array

nums = []

n = int(input("Enter number of elements:"))  # This is n+1
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

seen = set()
duplicate = -1

for x in nums:
    if x in seen:
        duplicate = x
        break
    seen.add(x)

print("Duplicate number is:", duplicate)
