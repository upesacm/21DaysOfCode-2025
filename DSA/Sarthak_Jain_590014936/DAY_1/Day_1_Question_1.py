#Sarthak Jain 590014936
#Day 1 Question 1
#Replace All Negative Numbers with Zero

lis=[]

a=int(input("Enter number of elements:"))
for i in range(a):
    b=int(input("Enter element:"))
    lis.append(b)

print("Given List:")
print(lis)

for x in range(a):
    if lis[x]<0:
        lis[x]=0

print("Updated list with Negative numbers replaced by 0:")
print(lis)

#Basic array manipulation by checking every element at indexes of the list and changing if <0
