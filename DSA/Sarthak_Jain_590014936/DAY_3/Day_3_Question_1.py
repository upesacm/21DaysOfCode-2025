#Sarthak Jain 590014936
#Day 3 Question 1
#K-Frequency Element Sum

nums = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    nums.append(b)

k = int(input("Enter value of k:"))

print("Given List:", nums)
print("Value of k:", k)

# Create frequency dictionary
freq = {}

for x in nums:
    if x in freq:
        freq[x] += 1
    else:
        freq[x] = 1

total = 0
for key in freq:
    if freq[key] == k:
        total += key

print("Sum of elements appearing exactly", k, "times:", total)
