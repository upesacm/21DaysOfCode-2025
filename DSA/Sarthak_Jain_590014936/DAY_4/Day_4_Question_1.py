#Sarthak Jain 590014936
#Day 4 Question 1
#Find the Minimum Element

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

# Initialize min_element with the first value
min_element = nums[0]

for x in nums:
    if x < min_element:
        min_element = x

print("Minimum Element in the list:", min_element)
