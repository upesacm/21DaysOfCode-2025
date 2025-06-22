#A fundamental array operation that calculates the total sum of all elements.
#INPUT THE ARRAY
n = int(input("Enter the number of elements in the array: "))
ls = [] #Initialise empty list
for i in range(n):
    ls.append(int(input()))
sum = 0 #Update variable sum initiallys et to 0
for element in ls:
    sum += element #Iterates through each elemnt and adds to the variable sum
print(sum)