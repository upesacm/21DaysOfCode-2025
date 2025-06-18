# Calculate and return the sum of all even numbers in the array.
nums = list(map(int,input("enter numbers for list with spaces :").split()))
sum=0
for num in nums:
    if num % 2 == 0 :
        sum = sum + num

print (sum)
