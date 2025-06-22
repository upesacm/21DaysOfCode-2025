size = int(input("Enter the number of elements in the array: "))
nums = [] #Initialise empty list
for i in range(size):
    nums.append(int(input()))
even_sum = 0
for i in nums:
    if i%2 == 0:
        even_sum += i
print(even_sum)