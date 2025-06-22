#Sarthak Jain 590014936
#Day 5 Question 2
#Find the Missing Number

nums = []

n = int(input("Enter number of elements:"))  # This is actually n (not n+1)
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

print("Given List:", nums)

expected_sum = (n * (n + 1)) // 2
actual_sum = sum(nums)

missing = expected_sum - actual_sum

print("Missing number is:", missing)
