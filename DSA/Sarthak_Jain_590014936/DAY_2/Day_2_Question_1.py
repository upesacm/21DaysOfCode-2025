#Sarthak Jain 590014936
#Day 2 Question 1
#Sum of All Even Numbers

lis = []

n = int(input("Enter number of elements:"))
for i in range(n):
    b = int(input("Enter element:"))
    lis.append(b)

print("Given List:")
print(lis)

even_sum = 0
for x in lis:
    if x % 2 == 0:
        even_sum += x

print("Sum of all even numbers in the list:", even_sum)
