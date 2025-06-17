#Sarthak Jain 590014936
#Day 1 Question 2
#Find Missing and Repeated Number

lis = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    lis.append(b)

print("Given List:")
print(lis)

# Create a count list of size n+1 (index 0 not used)
count = [0] * (n + 1)

for x in lis:
    count[x] += 1

for i in range(1, n + 1):
    if count[i] == 0:
        missing = i
    elif count[i] == 2:
        repeated = i

print("Missing:", missing)
print("Twice:", repeated)
