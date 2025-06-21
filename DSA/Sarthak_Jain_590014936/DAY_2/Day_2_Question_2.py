#Sarthak Jain 590014936
#Day 2 Question 2
#Find First and Last Element

lis = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    lis.append(b)

print("Given List:")
print(lis)

first = lis[0]
last = lis[-1]

print("First:", first)
print("Last:", last)
