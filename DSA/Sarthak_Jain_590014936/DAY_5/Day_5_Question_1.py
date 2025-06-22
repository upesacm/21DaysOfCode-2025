#Sarthak Jain 590014936
#Day 5 Question 1
#Find the Unique Element

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

# Use XOR to find the unique element
unique = 0
for x in nums:
    unique ^= x

print("Element that appears only once:", unique)
