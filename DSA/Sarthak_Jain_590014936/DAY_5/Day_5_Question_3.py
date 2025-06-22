#Sarthak Jain 590014936
#Day 5 Question 3
#Check if Array is Palindrome

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

# Check if list is equal to its reverse
if nums == nums[::-1]:
    print("true")
else:
    print("false")
