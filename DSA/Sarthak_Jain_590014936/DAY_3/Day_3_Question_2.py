#Sarthak Jain 590014936
#Day 3 Question 2
#Check for Duplicates

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

# Use a set to track seen elements
seen = set()
duplicate_found = False

for x in nums:
    if x in seen:
        duplicate_found = True
        break
    seen.add(x)

if duplicate_found:
    print("true")
else:
    print("false")
