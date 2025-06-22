arr = input("Enter the array elements separated by spaces: ")
arr = list(map(int,arr.split()))

sum = 0

for num in arr:
    if num % 2 == 0:
        sum += num
        
print("Sum of even numbers in the array is: ", sum)
