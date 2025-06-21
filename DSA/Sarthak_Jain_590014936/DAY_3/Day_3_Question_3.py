#Sarthak Jain 590014936
#Day 3 Question 3
#Find the Second Largest Unique Element

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

# Use set to remove duplicates
unique = list(set(nums))

if len(unique) < 2:
    print("-1")
else:
    unique.sort()
    print("Second Largest Element:", unique[-2])
