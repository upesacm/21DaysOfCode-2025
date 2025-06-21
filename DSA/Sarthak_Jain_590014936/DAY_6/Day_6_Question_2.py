#Sarthak Jain 590014936
#Day 6 Question 2
#Check if Array is Fully Increasing

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

increasing = True

for i in range(1, n):
    if nums[i] <= nums[i - 1]:
        increasing = False
        break

if increasing:
    print("true")
else:
    print("false")
