#Sarthak Jain 590014936
#Day 1 Question 3
#Sum of Array Elements

lis = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    lis.append(b)

print("Given List:")
print(lis)

total = 0
for x in lis:
    total += x

print("Sum of all elements in the list:", total)
