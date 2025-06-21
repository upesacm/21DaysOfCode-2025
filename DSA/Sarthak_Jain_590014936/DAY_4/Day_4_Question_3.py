#Sarthak Jain 590014936
#Day 4 Question 3
#Remove All Occurrences of a Value

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

val = int(input("Enter the value to remove:"))

print("Original List:", nums)

# Create a new list excluding val
new_nums = []
for x in nums:
    if x != val:
        new_nums.append(x)

print("List after removing all occurrences of", val, ":", new_nums)
print("New length of array:", len(new_nums))
